#include <avr/pgmspace.h>
#define WOODBOX1_NUM_CELLS 2054
#define WOODBOX1_SAMPLERATE 62500
 
const int16_t WOODBOX1[] PROGMEM = {32840, 32879, 32876, 32833, 32710, 32569,
32462, 32521, 32789, 33241, 33709, 33995, 33932, 33473, 32758, 31962, 31383,
31182, 31509, 32334, 33547, 34865, 36019, 36780, 37042, 36812, 36175, 35262,
34203, 33069, 31872, 30621, 29353, 28129, 27114, 26421, 26206, 26564, 27530,
29052, 30856, 32594, 33927, 34749, 35075, 35056, 34780, 34346, 33763, 33052,
32274, 31513, 30881, 30511, 30501, 30909, 31717, 32747, 33785, 34565, 34979,
34978, 34697, 34237, 33837, 33694, 34024, 34869, 36103, 37383, 38370, 38826,
38701, 37994, 36814, 35332, 33796, 32454, 31467, 30885, 30608, 30567, 30636,
30782, 30965, 31204, 31424, 31632, 31722, 31669, 31460, 31095, 30666, 30189,
29797, 29540, 29503, 29754, 30248, 30942, 31648, 32260, 32628, 32739, 32587,
32271, 31862, 31507, 31254, 31199, 31336, 31671, 32163, 32810, 33522, 34255,
34858, 35214, 35231, 34864, 34187, 33294, 32372, 31582, 31072, 30964, 31286,
32013, 32994, 34022, 34894, 35440, 35653, 35532, 35188, 34734, 34285, 33950,
33764, 33750, 33852, 34038, 34265, 34513, 34750, 34965, 35132, 35228, 35274,
35261, 35191, 35050, 34797, 34441, 33983, 33494, 33067, 32785, 32719, 32854,
33126, 33421, 33651, 33724, 33650, 33419, 33089, 32666, 32168, 31631, 31052,
30547, 30145, 29968, 30032, 30291, 30657, 30973, 31149, 31106, 30919, 30623,
30360, 30168, 30120, 30207, 30428, 30772, 31196, 31646, 32036, 32269, 32268,
32028, 31564, 30964, 30331, 29788, 29424, 29311, 29470, 29838, 30376, 30980,
31558, 32059, 32420, 32646, 32742, 32738, 32675, 32594, 32520, 32486, 32503,
32578, 32714, 32924, 33220, 33635, 34111, 34620, 35012, 35221, 35160, 34876,
34423, 33915, 33475, 33162, 33029, 33049, 33195, 33421, 33714, 34085, 34520,
34988, 35389, 35613, 35605, 35312, 34809, 34167, 33556, 33058, 32781, 32707,
32831, 33063, 33337, 33579, 33708, 33685, 33483, 33139, 32692, 32257, 31922,
31761, 31816, 32026, 32346, 32624, 32834, 32892, 32827, 32634, 32375, 32066,
31721, 31390, 31078, 30816, 30627, 30515, 30489, 30549, 30690, 30931, 31233,
31603, 31972, 32299, 32532, 32650, 32663, 32599, 32520, 32476, 32496, 32581,
32744, 32933, 33135, 33326, 33463, 33567, 33583, 33523, 33357, 33103, 32779,
32439, 32145, 31972, 31965, 32154, 32539, 33070, 33698, 34319, 34850, 35229,
35414, 35417, 35274, 35039, 34796, 34595, 34476, 34427, 34429, 34425, 34402,
34321, 34221, 34075, 33928, 33742, 33567, 33369, 33224, 33120, 33115, 33184,
33303, 33439, 33539, 33615, 33653, 33698, 33715, 33694, 33583, 33336, 32982,
32530, 32102, 31769, 31630, 31686, 31913, 32199, 32462, 32623, 32664, 32579,
32411, 32171, 31888, 31599, 31316, 31092, 30941, 30916, 31035, 31296, 31717,
32187, 32675, 33061, 33325, 33423, 33376, 33176, 32851, 32444, 31979, 31568,
31252, 31120, 31161, 31395, 31724, 32126, 32527, 32912, 33283, 33621, 33931,
34158, 34285, 34315, 34230, 34111, 33952, 33809, 33694, 33594, 33533, 33482,
33461, 33440, 33432, 33401, 33353, 33281, 33195, 33130, 33104, 33159, 33269,
33431, 33582, 33697, 33741, 33709, 33624, 33521, 33405, 33329, 33282, 33264,
33271, 33269, 33276, 33266, 33243, 33169, 33027, 32770, 32415, 31974, 31513,
31084, 30747, 30515, 30417, 30448, 30601, 30881, 31253, 31709, 32171, 32593,
32897, 33031, 33004, 32812, 32520, 32167, 31818, 31486, 31236, 31052, 30986,
31018, 31171, 31435, 31738, 32079, 32338, 32534, 32606, 32602, 32546, 32485,
32458, 32479, 32573, 32718, 32922, 33151, 33398, 33602, 33765, 33827, 33824,
33729, 33596, 33455, 33329, 33238, 33190, 33171, 33200, 33255, 33357, 33490,
33627, 33760, 33847, 33889, 33879, 33836, 33787, 33736, 33707, 33691, 33704,
33738, 33790, 33854, 33887, 33882, 33795, 33642, 33412, 33113, 32792, 32457,
32132, 31866, 31649, 31524, 31489, 31547, 31709, 31921, 32178, 32411, 32613,
32732, 32787, 32766, 32665, 32503, 32266, 31989, 31673, 31381, 31133, 30963,
30902, 30900, 30964, 31035, 31101, 31132, 31169, 31205, 31276, 31378, 31494,
31611, 31696, 31763, 31822, 31901, 32020, 32167, 32334, 32482, 32593, 32678,
32726, 32790, 32853, 32948, 33025, 33082, 33090, 33070, 33019, 32979, 32955,
32938, 32937, 32923, 32923, 32937, 32994, 33122, 33321, 33587, 33882, 34186,
34444, 34633, 34732, 34705, 34562, 34293, 33939, 33558, 33193, 32921, 32768,
32752, 32843, 33004, 33188, 33357, 33486, 33593, 33660, 33706, 33702, 33645,
33508, 33311, 33069, 32825, 32605, 32433, 32312, 32231, 32184, 32149, 32134,
32104, 32063, 31994, 31873, 31719, 31532, 31368, 31241, 31192, 31231, 31327,
31469, 31601, 31724, 31806, 31879, 31928, 31986, 32035, 32085, 32126, 32143,
32157, 32132, 32107, 32046, 31985, 31916, 31841, 31807, 31775, 31788, 31805,
31870, 31939, 32053, 32194, 32378, 32603, 32867, 33151, 33426, 33671, 33841,
33943, 33946, 33904, 33799, 33691, 33575, 33469, 33380, 33304, 33252, 33225,
33233, 33269, 33326, 33395, 33463, 33520, 33575, 33607, 33628, 33618, 33580,
33525, 33471, 33424, 33405, 33413, 33417, 33422, 33380, 33326, 33225, 33135,
33034, 32949, 32846, 32727, 32575, 32405, 32232, 32081, 31973, 31929, 31934,
31996, 32089, 32174, 32282, 32336, 32384, 32388, 32379, 32353, 32327, 32299,
32252, 32188, 32078, 31940, 31763, 31579, 31400, 31260, 31154, 31106, 31078,
31092, 31114, 31178, 31274, 31426, 31668, 31964, 32329, 32717, 33085, 33406,
33627, 33755, 33767, 33694, 33553, 33384, 33247, 33159, 33163, 33245, 33391,
33569, 33727, 33859, 33935, 33975, 33976, 33962, 33931, 33880, 33814, 33724,
33618, 33528, 33451, 33429, 33459, 33557, 33694, 33852, 33982, 34063, 34052,
33961, 33781, 33552, 33303, 33061, 32861, 32714, 32605, 32536, 32455, 32378,
32253, 32135, 32010, 31930, 31907, 31946, 32026, 32123, 32179, 32193, 32135,
32035, 31899, 31757, 31615, 31486, 31372, 31281, 31204, 31174, 31162, 31192,
31256, 31349, 31482, 31644, 31846, 32052, 32267, 32435, 32541, 32583, 32548,
32481, 32386, 32318, 32275, 32298, 32371, 32494, 32657, 32824, 32997, 33135,
33264, 33360, 33455, 33542, 33614, 33694, 33747, 33805, 33837, 33886, 33935,
34027, 34134, 34290, 34443, 34589, 34698, 34748, 34739, 34667, 34557, 34414,
34251, 34082, 33908, 33722, 33546, 33373, 33222, 33105, 33010, 32973, 32939,
32943, 32938, 32953, 32937, 32932, 32898, 32859, 32805, 32749, 32681, 32625,
32548, 32468, 32379, 32267, 32158, 32029, 31926, 31814, 31738, 31670, 31628,
31589, 31559, 31529, 31500, 31474, 31464, 31471, 31488, 31521, 31543, 31550,
31543, 31512, 31499, 31485, 31533, 31608, 31756, 31916, 32119, 32304, 32461,
32595, 32671, 32743, 32791, 32852, 32924, 33011, 33098, 33181, 33253, 33316,
33366, 33438, 33498, 33578, 33646, 33705, 33743, 33756, 33760, 33741, 33729,
33710, 33701, 33698, 33708, 33723, 33748, 33755, 33768, 33751, 33743, 33717,
33725, 33748, 33799, 33880, 33955, 34018, 34048, 34026, 33958, 33836, 33686,
33505, 33314, 33133, 32945, 32784, 32628, 32499, 32393, 32308, 32251, 32221,
32208, 32215, 32215, 32210, 32180, 32120, 32039, 31927, 31827, 31719, 31674,
31649, 31695, 31765, 31862, 31962, 32027, 32078, 32094, 32092, 32080, 32059,
32033, 31994, 31947, 31903, 31853, 31832, 31834, 31866, 31944, 32038, 32165,
32285, 32407, 32508, 32584, 32641, 32678, 32721, 32765, 32832, 32915, 33007,
33102, 33174, 33241, 33275, 33323, 33356, 33423, 33492, 33596, 33690, 33787,
33858, 33909, 33921, 33912, 33886, 33853, 33816, 33786, 33749, 33704, 33641,
33554, 33451, 33337, 33229, 33141, 33076, 33035, 33023, 33010, 33001, 32976,
32942, 32889, 32845, 32803, 32786, 32780, 32791, 32803, 32793, 32770, 32713,
32644, 32552, 32475, 32392, 32328, 32262, 32181, 32080, 31952, 31810, 31659,
31539, 31437, 31403, 31389, 31443, 31509, 31620, 31731, 31858, 31970, 32084,
32181, 32270, 32358, 32430, 32492, 32538, 32577, 32589, 32618, 32634, 32670,
32726, 32787, 32878, 32947, 33028, 33068, 33106, 33101, 33097, 33079, 33080,
33100, 33157, 33237, 33341, 33439, 33530, 33586, 33625, 33633, 33639, 33633,
33638, 33652, 33654, 33676, 33670, 33673, 33647, 33627, 33580, 33547, 33496,
33456, 33410, 33358, 33304, 33248, 33180, 33133, 33071, 33035, 32989, 32953,
32906, 32847, 32762, 32657, 32526, 32382, 32243, 32106, 32000, 31901, 31835,
31785, 31749, 31729, 31728, 31743, 31775, 31826, 31882, 31948, 31997, 32048,
32078, 32100, 32114, 32120, 32112, 32111, 32091, 32077, 32054, 32036, 31997,
31979, 31952, 31947, 31964, 32020, 32091, 32198, 32318, 32427, 32543, 32642,
32728, 32817, 32900, 32988, 33087, 33186, 33295, 33390, 33480, 33541, 33591,
33609, 33627, 33618, 33632, 33638, 33645, 33653, 33638, 33620, 33571, 33533,
33482, 33451, 33446, 33443, 33477, 33488, 33522, 33525, 33534, 33529, 33515,
33510, 33493, 33469, 33439, 33389, 33317, 33238, 33133, 33029, 32916, 32825,
32736, 32683, 32651, 32630, 32623, 32606, 32568, 32517, 32452, 32381, 32312,
32255, 32211, 32160, 32125, 32065, 32018, 31968, 31917, 31890, 31872, 31873,
31889, 31900, 31925, 31924, 31927, 31921, 31912, 31915, 31932, 31972, 32028,
32100, 32174, 32255, 32312, 32372, 32412, 32463, 32502, 32569, 32628, 32702,
32772, 32817, 32857, 32863, 32865, 32847, 32842, 32834, 32856, 32868, 32915,
32946, 33018, 33067, 33136, 33214, 33282, 33364, 33437, 33507, 33566, 33616,
33642, 33660, 33651, 33649, 33625, 33612, 33590, 33570, 33534, 33491, 33426,
33358, 33287, 33213, 33167, 33122, 33107, 33095, 33101, 33099, 33102, 33090,
33074, 33046, 33017, 32979, 32949, 32900, 32863, 32787, 32717, 32614, 32520,
32419, 32347, 32299, 32274, 32293, 32302, 32325, 32325, 32309, 32262, 32216,
32166, 32125, 32111, 32123, 32147, 32185, 32235, 32263, 32293, 32304, 32304,
32289, 32282, 32259, 32249, 32236, 32238, 32230, 32252, 32268, 32316, 32373,
32456, 32549, 32644, 32752, 32823, 32905, 32954, 32999, 33040, 33074, 33116,
33159, 33189, 33213, 33221, 33210, 33186, 33149, 33121, 33094, 33084, 33095,
33111, 33144, 33168, 33212, 33220, 33260, 33258, 33291, 33297, 33323, 33337,
33353, 33354, 33336, 33308, 33256, 33197, 33126, 33072, 33014, 32966, 32924,
32869, 32818, 32753, 32688, 32621, 32560, 32503, 32464, 32428, 32412, 32391,
32388, 32378, 32370, 32369, 32360, 32360, 32354, 32356, 32354, 32336, 32324,
32287, 32252, 32211, 32164, 32146, 32122, 32133, 32148, 32193, 32219, 32278,
32312, 32359, 32397, 32436, 32485, 32526, 32568, 32609, 32636, 32666, 32678,
32710, 32736, 32777, 32828, 32883, 32944, 32973, 33012, 33009, 33008, 32981,
32973, 32961, 32978, 33012, 33059, 33124, 33180, 33244, 33288, 33332, 33356,
33384, 33388, 33404, 33395, 33391, 33362, 33324, 33283, 33229, 33182, 33141,
33109, 33091, 33069, 33053, 33019, 32981, 32932, 32883, 32824, 32792, 32760,
32748, 32749, 32760, 32762, 32772, 32757, 32742, 32709, 32667, 32617, 32569,
32521, 32474, 32422, 32387, 32330, 32302, 32253, 32241, 32221, 32228, 32235,
32251, 32261, 32272, 32268, 32275, 32273, 32284, 32310, 32344, 32394, 32451,
32504, 32548, 32586, 32599, 32609, 32610, 32616, 32614, 32630, 32648, 32670,
32693, 32722, 32738, 32768, 32795, 32821, 32867, 32912, 32968, 33028, 33078,
33126, 33158, 33190, 33217, 33241, 33280, 33309, 33346, 33372, 33383, 33382,
33363, 33330, 33297, 33253, 33220, 33193, 33175, 33166, 33158, 33169, 33168,
33175, 33193, 33195, 33211, 33214, 33209, 33197, 33159, 33126, 33064, 33009,
32941, 32889, 32831, 32792, 32755, 32733, 32708, 32688, 32662, 32634, 32604,
32566, 32553, 32525, 32525, 32517, 32513, 32507, 32495, 32470, 32460, 32426,
32417, 32393, 32392, 32380, 32383, 32372, 32374, 32357, 32355, 32340, 32341,
32337, 32344, 32362, 32377, 32402, 32423, 32440, 32457, 32482, 32509, 32549,
32602, 32664, 32733, 32803, 32858, 32910, 32931, 32958, 32955, 32959, 32950,
32952, 32943, 32951, 32954, 32965, 32998, 33020, 33076, 33119, 33178, 33222,
33264, 33287, 33289, 33281, 33247, 33222, 33175, 33150, 33123, 33113, 33114,
33120, 33131, 33134, 33138, 33125, 33106, 33078, 33047, 33010, 32978, 32946,
32919, 32891, 32873, 32849, 32848, 32829, 32840, 32824, 32820, 32793, 32757,
32703, 32643, 32571, 32511, 32446, 32409, 32378, 32368, 32375, 32384, 32405,
32421, 32435, 32428, 32429, 32411, 32392, 32378, 32368, 32361, 32373, 32393,
32418, 32456, 32501, 32546, 32596, 32634, 32673, 32683, 32694, 32682, 32667,
32648, 32638, 32639, 32656, 32679, 32719, 32756, 32802, 32843, 32886, 32920,
32957, 32989, 33020, 33050, 33071, 33096, 33102, 33114, 33112, 33115, 33111,
33113, 33121, 33124, 33147, 33139, 33158, 33128, 33124, 33084, 33062, 33024,
33007, 32985, 32978, 32967, 32962, 32952, 32939, 32922, 32902, 32880, 32860,
32837, 32820, 32793, 32775, 32743, 32714, 32688, 32654, 32628, 32611, 32583,
32578, 32556, 32547, 32523, 32503, 32483, 32459, 32446, 32438, 32446, 32457,
32475, 32500, 32513, 32532, 32535, 32541, 32540, 32539, 32540, 32527, 32532,
32517, 32513, 32514, 32509, 32528, 32551, 32595, 32647, 32706, 32763, 32814,
32856, 32884, 32911, 32922, 32949, 32967, 32993, 33013, 33031, 33041, 33043,
33047, 33046, 33051, 33069, 33081, 33111, 33125, 33145, 33154, 33147, 33156,
33135, 33137, 33128, 33130, 33127, 33126, 33118, 33103, 33087, 33053, 33027,
32985, 32957, 32919, 32897, 32873, 32860, 32843, 32832, 32810, 32782, 32759,
32714, 32677, 32635, 32590, 32557, 32507, 32478, 32443, 32415, 32407, 32395,
32410, 32421, 32435, 32451, 32447, 32436, 32415, 32389, 32361, 32338, 32321,
32311, 32306, 32307, 32313, 32320, 32338, 32351, 32376, 32393, 32404, 32424,
32432, 32457, 32470, 32514, 32552, 32614, 32671, 32741, 32803, 32855, 32903,
32941, 32961, 32984, 32998, 33011, 33017, 33022, 33028, 33034, 33046, 33055,
33083, 33104, 33139, 33176, 33210, 33246, 33278, 33302, 33313, 33324, 33317,
33307, 33288, 33261, 33229, 33197, 33163, 33135, 33112, 33092, 33074, 33060,
33040, 33022, 32991, 32966, 32930, 32903, 32878, 32866, 32851, 32861, 32864,
32872, 32876, 32864, 32852, 32808, 32771, 32711, 32662, 32607, 32557, 32506,
32473, 32433, 32407, 32388, 32373, 32366, 32363, 32368, 32361, 32366, 32350,
32345, 32328, 32326, 32326, 32332, 32354, 32372, 32407, 32428, 32461, 32481,
32501, 32525, 32539, 32570, 32587, 32615, 32635, 32661, 32672, 32702, 32711,
32751, 32780, 32819, 32857, 32892, 32916, 32935, 32930, 32940, 32932, 32935,
32940, 32951, 32970, 32989, 33018, 33047, 33081, 33111, 33145, 33169, 33195,
33206, 33207, 33202, 33184, 33163, 33143, 33114, 33103, 33076, 33074, 33054,
33056, 33042, 33034, 33021, 33002, 32978, 32955, 32926, 32900, 32872, 32847,
32833, 32800, 32798, 32769, 32758, 32729, 32709, 32672, 32645, 32596, 32569,
32529, 32514, 32497, 32507, 32517, 32542, 32563, 32584, 32590, 32591, 32567,
32543, 32502, 32465, 32425, 32398, 32377, 32377, 32387, 32412, 32449, 32495,
32538, 32588, 32622, 32657, 32675, 32687, 32693, 32686, 32697, 32703, 32717,
32743, 32766, 32796, 32815, 32835, 32842, 32856, 32860, 32867, 32877, 32892,
32890, 32914, };