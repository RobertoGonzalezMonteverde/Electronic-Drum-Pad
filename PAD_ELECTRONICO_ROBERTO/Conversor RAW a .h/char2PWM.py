#Programa por Roberto González
#Modificación del programa del Blog de Hosking http://bloghoskins.blogspot.com/

import sys, array, os, textwrap, random

if len(sys.argv) != 5:
        print ('Usage: char2PWM.py <infile outfile tablename samplerate>')
        sys.exit(1)

[infile, outfile, tablename, samplerate] = sys.argv[1:]

def char2PWM(infile, outfile, tablename, samplerate):
	fin = open(os.path.expanduser(infile), "rb") #opertura de fichero
	print ("abierto " + infile)
	variabletamanyo = os.path.getsize(os.path.expanduser(infile))
	print ("tamaño " + str(variabletamanyo))
	##print uint8_tstoread
	valoresfichero = array.array('h') # array of signed int8_t ints
	for i in range(0,len(valoresfichero)):
		print(valoresfichero[i])
	try:
		#al ser de 16 bits el tamaño es la mitad
		valoresfichero.fromfile(fin, int(variabletamanyo/2))
		
	finally:
		fin.close()
	
	values=valoresfichero.tolist()
	fout = open(os.path.expanduser(outfile), "w")
	fout.write('#include <avr/pgmspace.h>'+'\n')  
	#definimos solo el numero de celdas y el samplerate
	fout.write('#define ' + tablename + '_NUM_CELLS '+ str(len(values))+'\n')
	fout.write('#define ' + tablename + '_SAMPLERATE '+ str(samplerate)+'\n \n')
	#añadimos todos los valores
	outstring = 'const int16_t ' + tablename + '[] PROGMEM = {'
	try:
		print ("tamaño " + str(len(values)))
		for i in range(len(values)):
			#como son signed se suma la mitad para que esten de 0 a 65535
			outstring += str(values[i] + 32768) + ", " 
	finally:
		outstring +=  "};"
		outstring = textwrap.fill(outstring, 80)
		fout.write(outstring)
		fout.close()
		print ("Guardado " + outfile)

char2PWM(infile, outfile, tablename, samplerate)