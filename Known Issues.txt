main.cpp:75:26: error: expected ‘;’ at end of member declaration
   75 |                 unsigned __int64 pixelId = 0;
      |                          ^~~~~~~
      |                                 ;
main.cpp:75:34: error: ‘pixelId’ does not name a type; did you mean ‘Pixel’?
   75 |                 unsigned __int64 pixelId = 0;
      |                                  ^~~~~~~
      |                                  Pixel
main.cpp:77:26: error: expected ‘;’ at end of member declaration
   77 |                 unsigned __int64 idProducer() {
      |                          ^~~~~~~
      |                                 ;
main.cpp:77:26: error: redeclaration of ‘unsigned int Pixel::__int64’
main.cpp:75:26: note: previous declaration ‘unsigned int Pixel::__int64’
   75 |                 unsigned __int64 pixelId = 0;
      |                          ^~~~~~~
main.cpp:77:34: error: ISO C++ forbids declaration of ‘idProducer’ with no type [-fpermissive]
   77 |                 unsigned __int64 idProducer() {
      |                                  ^~~~~~~~~~
main.cpp: In member function ‘int Pixel::idProducer()’:
main.cpp:78:42: error: expected initializer before ‘iD’
   78 |                         unsigned __int64 iD = 0;
      |                                          ^~
main.cpp:79:25: error: ‘iD’ was not declared in this scope
   79 |                         iD += position[0][0] * 100000000000;
      |                         ^~
main.cpp: In member function ‘void Pixel::fixId()’:
main.cpp:129:25: error: ‘pixelId’ was not declared in this scope; did you mean ‘Pixel’?
  129 |                         pixelId = idProducer();
      |                         ^~~~~~~
      |                         Pixel
main.cpp: At global scope:
main.cpp:859:53: error: expected ‘,’ or ‘...’ before ‘id’
  859 |                 Pixel* searchPixel(unsigned __int64 id) {
      |                                                     ^~
main.cpp:900:51: error: expected ‘,’ or ‘...’ before ‘id’
  900 |                 int searchPixel2(unsigned __int64 id) {
      |                                                   ^~
main.cpp: In member function ‘Pixel* Cube::searchPixel(unsigned int)’:
main.cpp:861:42: error: expected initializer before ‘id2’
  861 |                         unsigned __int64 id2 = id;
      |                                          ^~~
main.cpp:862:38: error: ‘id2’ was not declared in this scope
  862 |                         post[0][0] = id2 / 100000000000;
      |                                      ^~~
main.cpp:887:63: error: ‘id’ was not declared in this scope; did you mean ‘i’?
  887 |                                 if (pixels[i].idProducer() == id) {
      |                                                               ^~
      |                                                               i
main.cpp: In member function ‘int Cube::searchPixel2(unsigned int)’:
main.cpp:902:63: error: ‘id’ was not declared in this scope; did you mean ‘i’?
  902 |                                 if (pixels[i].idProducer() == id) {
      |                                                               ^~
      |                                                               i
main.cpp: In member function ‘void Cube::rotateCubeSupport(int, int, Pixel*)’:
main.cpp:966:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
  966 |                                                 leftpx->editColor(searchPixel(300301311310)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:968:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
  968 |                                                 init->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:970:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
  970 |                                                 rightpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:973:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
  973 |                                                 leftpx = searchPixel(300301311310);
      |                                                                      ^~~~~~~~~~~~
main.cpp:974:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
  974 |                                                 init = searchPixel(310311321320);
      |                                                                    ^~~~~~~~~~~~
main.cpp:975:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
  975 |                                                 rightpx = searchPixel(320321331330);
      |                                                                       ^~~~~~~~~~~~
main.cpp:979:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
  979 |                                                 init->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:980:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
  980 |                                                 rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:983:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
  983 |                                                 init = searchPixel(131130230231);
      |                                                                    ^~~~~~~~~~~~
main.cpp:984:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
  984 |                                                 rightpx = searchPixel(231230330331);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1014:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1014 |                                                 leftpx->editColor(searchPixel(300301311310)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1015:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1015 |                                                 init->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1016:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1016 |                                                 rightpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1017:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1017 |                                                 leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1018:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1018 |                                                 above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1019:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1019 |                                                 rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1021:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1021 |                                                 leftpx = searchPixel(300301311310);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1022:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1022 |                                                 init = searchPixel(310311321320);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1023:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1023 |                                                 rightpx = searchPixel(320321331330);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1024:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1024 |                                                 leftUPpx = searchPixel(301302312311);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1025:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1025 |                                                 above = searchPixel(311312322321);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1026:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1026 |                                                 rightUPpx = searchPixel(321322332331);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1029:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1029 |                                                 init->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1030:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1030 |                                                 rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1032:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1032 |                                                 above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1033:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1033 |                                                 rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1036:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1036 |                                                 init = searchPixel(131130230231);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1037:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1037 |                                                 rightpx = searchPixel(231230330331);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1039:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1039 |                                                 above = searchPixel(132131231232);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1040:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1040 |                                                 rightUPpx = searchPixel(232231331332);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1074:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1074 |                                                 leftpx->editColor(searchPixel(302303313312)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1075:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1075 |                                                 init->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1076:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1076 |                                                 rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1078:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1078 |                                                 leftpx = searchPixel(302303313312);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1079:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1079 |                                                 init = searchPixel(312313323322);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1080:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1080 |                                                 rightpx = searchPixel(322323333332);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1083:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1083 |                                                 init->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1084:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1084 |                                                 rightpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1087:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1087 |                                                 init = searchPixel(133132232233);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1088:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1088 |                                                 rightpx = searchPixel(233232332333);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1118:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1118 |                                                 leftpx->editColor(searchPixel(302303313312)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1119:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1119 |                                                 init->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1120:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1120 |                                                 rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1121:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1121 |                                                 leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1122:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1122 |                                                 above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1123:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1123 |                                                 rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1125:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1125 |                                                 leftpx = searchPixel(302303313312);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1126:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1126 |                                                 init = searchPixel(312313323322);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1127:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1127 |                                                 rightpx = searchPixel(322323333332);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1128:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1128 |                                                 leftUPpx = searchPixel(301302312311);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1129:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1129 |                                                 above = searchPixel(311312322321);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1130:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1130 |                                                 rightUPpx = searchPixel(321322332331);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1133:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1133 |                                                 init->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1134:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1134 |                                                 rightpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1136:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1136 |                                                 above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1137:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1137 |                                                 rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1140:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1140 |                                                 init = searchPixel(133132232233);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1141:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1141 |                                                 rightpx = searchPixel(233232332333);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1143:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1143 |                                                 above = searchPixel(132131231232);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1144:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1144 |                                                 rightUPpx = searchPixel(232231331332);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1224:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130230220120’ to ‘1381201240’ [-Woverflow]
 1224 |                                                 leftUPpx->editColor(searchPixel(130230220120)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1225:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120220210110’ to ‘4256093118’ [-Woverflow]
 1225 |                                                 above->editColor(searchPixel(120220210110)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1226:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110210200100’ to ‘2836017700’ [-Woverflow]
 1226 |                                                 rightUPpx->editColor(searchPixel(110210200100)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1231:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130230220120’ to ‘1381201240’ [-Woverflow]
 1231 |                                                 leftUPpx = searchPixel(130230220120);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1232:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120220210110’ to ‘4256093118’ [-Woverflow]
 1232 |                                                 above = searchPixel(120220210110);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1233:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110210200100’ to ‘2836017700’ [-Woverflow]
 1233 |                                                 rightUPpx = searchPixel(110210200100);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1238:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1238 |                                                 leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1239:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1239 |                                                 above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1240:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1240 |                                                 rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1245:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1245 |                                                 leftUPpx = searchPixel(133132232233);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1246:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1246 |                                                 above = searchPixel(132131231232);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1247:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1247 |                                                 rightUPpx = searchPixel(131130230231);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1252:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1252 |                                                 leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1253:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1253 |                                                 above->editColor(searchPixel(113123223213)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1254:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1254 |                                                 rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1259:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1259 |                                                 leftUPpx = searchPixel(103113213203);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1260:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1260 |                                                 above = searchPixel(113123223213);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1261:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1261 |                                                 rightUPpx = searchPixel(123133233223);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1281:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1281 |                                                 leftpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1282:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1282 |                                                 init->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1283:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1283 |                                                 rightpx->editColor(searchPixel(210200300310)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1285:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1285 |                                                 leftpx = searchPixel(230220320330);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1286:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1286 |                                                 init = searchPixel(220210310320);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1287:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1287 |                                                 rightpx = searchPixel(210200300310);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1289:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1289 |                                                 leftpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1290:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1290 |                                                 init->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1291:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1291 |                                                 rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1293:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1293 |                                                 leftpx = searchPixel(233232332333);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1294:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1294 |                                                 init = searchPixel(232231331332);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1295:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1295 |                                                 rightpx = searchPixel(231230330331);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1297:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1297 |                                                 leftpx->editColor(searchPixel(203213313303)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1298:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1298 |                                                 init->editColor(searchPixel(213223323313)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1299:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1299 |                                                 rightpx->editColor(searchPixel(223233333323)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1301:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1301 |                                                 leftpx = searchPixel(203213313303);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1302:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1302 |                                                 init = searchPixel(213223323313);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1303:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1303 |                                                 rightpx = searchPixel(223233333323);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1324:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1324 |                                                 leftpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1325:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1325 |                                                 init->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1326:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1326 |                                                 rightpx->editColor(searchPixel(210200300310)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1327:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1327 |                                                 leftUPpx->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1328:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1328 |                                                 above->editColor(searchPixel(120110210220)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1329:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110100200210’ to ‘2726017810’ [-Woverflow]
 1329 |                                                 rightUPpx->editColor(searchPixel(110100200210)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1331:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1331 |                                                 leftpx = searchPixel(230220320330);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1332:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1332 |                                                 init = searchPixel(220210310320);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1333:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1333 |                                                 rightpx = searchPixel(210200300310);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1334:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1334 |                                                 leftUPpx = searchPixel(130120220230);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1335:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1335 |                                                 above = searchPixel(120110210220);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1336:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110100200210’ to ‘2726017810’ [-Woverflow]
 1336 |                                                 rightUPpx = searchPixel(110100200210);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1338:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1338 |                                                 leftpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1339:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1339 |                                                 init->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1340:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1340 |                                                 rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1341:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1341 |                                                 leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1342:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1342 |                                                 above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1343:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1343 |                                                 rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1345:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1345 |                                                 leftpx = searchPixel(233232332333);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1346:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1346 |                                                 init = searchPixel(232231331332);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1347:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1347 |                                                 rightpx = searchPixel(231230330331);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1348:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1348 |                                                 leftUPpx = searchPixel(133132232233);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1349:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1349 |                                                 above = searchPixel(132131231232);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1350:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1350 |                                                 rightUPpx = searchPixel(131130230231);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1352:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1352 |                                                 leftpx->editColor(searchPixel(203213313303)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1353:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1353 |                                                 init->editColor(searchPixel(213223323313)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1354:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1354 |                                                 rightpx->editColor(searchPixel(223233333323)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1355:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1355 |                                                 leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1356:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1356 |                                                 above->editColor(searchPixel(113123223213)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1357:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1357 |                                                 rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1359:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1359 |                                                 leftpx = searchPixel(203213313303);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1360:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1360 |                                                 init = searchPixel(213223323313);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1361:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1361 |                                                 rightpx = searchPixel(223233333323);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1362:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1362 |                                                 leftUPpx = searchPixel(103113213203);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1363:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1363 |                                                 above = searchPixel(113123223213);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1364:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1364 |                                                 rightUPpx = searchPixel(123133233223);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1384:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1384 |                                                 leftpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1385:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1385 |                                                 init->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1386:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1386 |                                                 rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1388:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1388 |                                                 leftpx = searchPixel(320321331330);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1389:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1389 |                                                 init = searchPixel(321322332331);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1390:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1390 |                                                 rightpx = searchPixel(322323333332);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1393:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1393 |                                                 init->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1394:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1394 |                                                 rightpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1397:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1397 |                                                 init = searchPixel(130120220230);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1398:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1398 |                                                 rightpx = searchPixel(230220320330);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1427:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1427 |                                                 leftpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1428:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1428 |                                                 init->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1429:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1429 |                                                 rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1430:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1430 |                                                 leftUPpx->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1431:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1431 |                                                 above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1432:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1432 |                                                 rightUPpx->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1434:70: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1434 |                                                 leftpx = searchPixel(320321331330);
      |                                                                      ^~~~~~~~~~~~
main.cpp:1435:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1435 |                                                 init = searchPixel(321322332331);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1436:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1436 |                                                 rightpx = searchPixel(322323333332);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1437:72: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1437 |                                                 leftUPpx = searchPixel(310311321320);
      |                                                                        ^~~~~~~~~~~~
main.cpp:1438:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1438 |                                                 above = searchPixel(311312322321);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1439:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1439 |                                                 rightUPpx = searchPixel(312313323322);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1442:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1442 |                                                 init->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1443:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1443 |                                                 rightpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1445:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1445 |                                                 above->editColor(searchPixel(120110210220)->pxlColor);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1446:82: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1446 |                                                 rightUPpx->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                                  ^~~~~~~~~~~~
main.cpp:1449:68: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1449 |                                                 init = searchPixel(130120220230);
      |                                                                    ^~~~~~~~~~~~
main.cpp:1450:71: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1450 |                                                 rightpx = searchPixel(230220320330);
      |                                                                       ^~~~~~~~~~~~
main.cpp:1452:69: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1452 |                                                 above = searchPixel(120110210220);
      |                                                                     ^~~~~~~~~~~~
main.cpp:1453:73: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1453 |                                                 rightUPpx = searchPixel(220210310320);
      |                                                                         ^~~~~~~~~~~~
main.cpp:1500:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1500 |                                                         init->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1501:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1501 |                                                         rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1504:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1504 |                                                         init = searchPixel(131130230231);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1505:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1505 |                                                         rightpx = searchPixel(231230330331);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1507:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1507 |                                                         leftpx->editColor(searchPixel(300301311310)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1508:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1508 |                                                         init->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1509:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1509 |                                                         rightpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1511:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1511 |                                                         leftpx = searchPixel(300301311310);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1512:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1512 |                                                         init = searchPixel(310311321320);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1513:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1513 |                                                         rightpx = searchPixel(320321331330);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1551:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1551 |                                                         init->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1552:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1552 |                                                         rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1554:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1554 |                                                         above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1555:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1555 |                                                         rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1558:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1558 |                                                         init = searchPixel(131130230231);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1559:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1559 |                                                         rightpx = searchPixel(231230330331);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1561:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1561 |                                                         above = searchPixel(132131231232);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1562:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1562 |                                                         rightUPpx = searchPixel(232231331332);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1564:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1564 |                                                         leftpx->editColor(searchPixel(300301311310)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1565:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1565 |                                                         init->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1566:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1566 |                                                         rightpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1567:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1567 |                                                         leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1568:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1568 |                                                         above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1569:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1569 |                                                         rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1571:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 1571 |                                                         leftpx = searchPixel(300301311310);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1572:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1572 |                                                         init = searchPixel(310311321320);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1573:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1573 |                                                         rightpx = searchPixel(320321331330);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1574:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1574 |                                                         leftUPpx = searchPixel(301302312311);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1575:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1575 |                                                         above = searchPixel(311312322321);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1576:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1576 |                                                         rightUPpx = searchPixel(321322332331);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1606:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1606 |                                                         init->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1607:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1607 |                                                         rightpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1610:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1610 |                                                         init = searchPixel(133132232233);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1611:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1611 |                                                         rightpx = searchPixel(233232332333);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1613:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1613 |                                                         leftpx->editColor(searchPixel(302303313312)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1614:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1614 |                                                         init->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1615:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1615 |                                                         rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1617:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1617 |                                                         leftpx = searchPixel(302303313312);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1618:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1618 |                                                         init = searchPixel(312313323322);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1619:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1619 |                                                         rightpx = searchPixel(322323333332);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1656:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1656 |                                                         init->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1657:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1657 |                                                         rightpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1659:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1659 |                                                         above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1660:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1660 |                                                         rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1663:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1663 |                                                         init = searchPixel(133132232233);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1664:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1664 |                                                         rightpx = searchPixel(233232332333);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1666:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1666 |                                                         above = searchPixel(132131231232);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1667:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1667 |                                                         rightUPpx = searchPixel(232231331332);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1669:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1669 |                                                         leftpx->editColor(searchPixel(302303313312)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1670:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1670 |                                                         init->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1671:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1671 |                                                         rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1672:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1672 |                                                         leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1673:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1673 |                                                         above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1674:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1674 |                                                         rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1676:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘302303313312’ to ‘1655602592’ [-Woverflow]
 1676 |                                                         leftpx = searchPixel(302303313312);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1677:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1677 |                                                         init = searchPixel(312313323322);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1678:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1678 |                                                         rightpx = searchPixel(322323333332);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1679:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘301302312311’ to ‘654601591’ [-Woverflow]
 1679 |                                                         leftUPpx = searchPixel(301302312311);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1680:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1680 |                                                         above = searchPixel(311312322321);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1681:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1681 |                                                         rightUPpx = searchPixel(321322332331);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1750:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1750 |                                                         leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1751:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1751 |                                                         above->editColor(searchPixel(113123223213)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1752:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1752 |                                                         rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1757:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1757 |                                                         leftUPpx = searchPixel(103113213203);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1758:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1758 |                                                         above = searchPixel(113123223213);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1759:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1759 |                                                         rightUPpx = searchPixel(123133233223);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1764:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1764 |                                                         leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1765:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1765 |                                                         above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1766:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1766 |                                                         rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1771:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1771 |                                                         leftUPpx = searchPixel(133132232233);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1772:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1772 |                                                         above = searchPixel(132131231232);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1773:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1773 |                                                         rightUPpx = searchPixel(131130230231);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1778:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130230220120’ to ‘1381201240’ [-Woverflow]
 1778 |                                                         leftUPpx->editColor(searchPixel(130230220120)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1779:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120220210110’ to ‘4256093118’ [-Woverflow]
 1779 |                                                         above->editColor(searchPixel(120220210110)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1780:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110210200100’ to ‘2836017700’ [-Woverflow]
 1780 |                                                         rightUPpx->editColor(searchPixel(110210200100)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1785:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130230220120’ to ‘1381201240’ [-Woverflow]
 1785 |                                                         leftUPpx = searchPixel(130230220120);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1786:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120220210110’ to ‘4256093118’ [-Woverflow]
 1786 |                                                         above = searchPixel(120220210110);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1787:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110210200100’ to ‘2836017700’ [-Woverflow]
 1787 |                                                         rightUPpx = searchPixel(110210200100);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1809:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1809 |                                                         leftpx->editColor(searchPixel(203213313303)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1810:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1810 |                                                         init->editColor(searchPixel(213223323313)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1811:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1811 |                                                         rightpx->editColor(searchPixel(223233333323)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1813:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1813 |                                                         leftpx = searchPixel(203213313303);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1814:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1814 |                                                         init = searchPixel(213223323313);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1815:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1815 |                                                         rightpx = searchPixel(223233333323);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1817:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1817 |                                                         leftpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1818:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1818 |                                                         init->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1819:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1819 |                                                         rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1821:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1821 |                                                         leftpx = searchPixel(233232332333);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1822:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1822 |                                                         init = searchPixel(232231331332);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1823:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1823 |                                                         rightpx = searchPixel(231230330331);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1825:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1825 |                                                         leftpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1826:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1826 |                                                         init->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1827:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1827 |                                                         rightpx->editColor(searchPixel(210200300310)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1829:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1829 |                                                         leftpx = searchPixel(230220320330);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1830:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1830 |                                                         init = searchPixel(220210310320);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1831:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1831 |                                                         rightpx = searchPixel(210200300310);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1854:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1854 |                                                         leftpx->editColor(searchPixel(203213313303)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1855:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1855 |                                                         init->editColor(searchPixel(213223323313)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1856:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1856 |                                                         rightpx->editColor(searchPixel(223233333323)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1857:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1857 |                                                         leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1858:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1858 |                                                         above->editColor(searchPixel(113123223213)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1859:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1859 |                                                         rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1861:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘203213313303’ to ‘1349850391’ [-Woverflow]
 1861 |                                                         leftpx = searchPixel(203213313303);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1862:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘213223323313’ to ‘2769925809’ [-Woverflow]
 1862 |                                                         init = searchPixel(213223323313);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1863:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘223233333323’ to ‘4190001227’ [-Woverflow]
 1863 |                                                         rightpx = searchPixel(223233333323);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1864:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘103113213203’ to ‘33998099’ [-Woverflow]
 1864 |                                                         leftUPpx = searchPixel(103113213203);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1865:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘113123223213’ to ‘1454073517’ [-Woverflow]
 1865 |                                                         above = searchPixel(113123223213);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1866:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘123133233223’ to ‘2874148935’ [-Woverflow]
 1866 |                                                         rightUPpx = searchPixel(123133233223);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1868:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1868 |                                                         leftpx->editColor(searchPixel(233232332333)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1869:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1869 |                                                         init->editColor(searchPixel(232231331332)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1870:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1870 |                                                         rightpx->editColor(searchPixel(231230330331)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1871:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1871 |                                                         leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1872:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1872 |                                                         above->editColor(searchPixel(132131231232)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1873:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1873 |                                                         rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1875:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘233232332333’ to ‘1304098349’ [-Woverflow]
 1875 |                                                         leftpx = searchPixel(233232332333);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1876:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘232231331332’ to ‘303097348’ [-Woverflow]
 1876 |                                                         init = searchPixel(232231331332);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1877:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 1877 |                                                         rightpx = searchPixel(231230330331);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1878:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘133132232233’ to ‘4283213353’ [-Woverflow]
 1878 |                                                         leftUPpx = searchPixel(133132232233);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1879:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘132131231232’ to ‘3282212352’ [-Woverflow]
 1879 |                                                         above = searchPixel(132131231232);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1880:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 1880 |                                                         rightUPpx = searchPixel(131130230231);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1882:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1882 |                                                         leftpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1883:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1883 |                                                         init->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1884:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1884 |                                                         rightpx->editColor(searchPixel(210200300310)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1885:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1885 |                                                         leftUPpx->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1886:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1886 |                                                         above->editColor(searchPixel(120110210220)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1887:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110100200210’ to ‘2726017810’ [-Woverflow]
 1887 |                                                         rightUPpx->editColor(searchPixel(110100200210)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1889:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1889 |                                                         leftpx = searchPixel(230220320330);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1890:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1890 |                                                         init = searchPixel(220210310320);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1891:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘210200300310’ to ‘4041870102’ [-Woverflow]
 1891 |                                                         rightpx = searchPixel(210200300310);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1892:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1892 |                                                         leftUPpx = searchPixel(130120220230);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1893:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1893 |                                                         above = searchPixel(120110210220);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1894:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘110100200210’ to ‘2726017810’ [-Woverflow]
 1894 |                                                         rightUPpx = searchPixel(110100200210);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1924:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1924 |                                                         init->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1925:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1925 |                                                         rightpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1928:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1928 |                                                         init = searchPixel(130120220230);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1929:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1929 |                                                         rightpx = searchPixel(230220320330);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1931:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1931 |                                                         leftpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1932:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1932 |                                                         init->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1933:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1933 |                                                         rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1935:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1935 |                                                         leftpx = searchPixel(320321331330);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1936:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1936 |                                                         init = searchPixel(321322332331);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1937:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1937 |                                                         rightpx = searchPixel(322323333332);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1974:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1974 |                                                         init->editColor(searchPixel(130120220230)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1975:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1975 |                                                         rightpx->editColor(searchPixel(230220320330)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1977:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1977 |                                                         above->editColor(searchPixel(120110210220)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1978:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1978 |                                                         rightUPpx->editColor(searchPixel(220210310320)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1981:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘130120220230’ to ‘1271201350’ [-Woverflow]
 1981 |                                                         init = searchPixel(130120220230);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1982:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘230220320330’ to ‘2587053642’ [-Woverflow]
 1982 |                                                         rightpx = searchPixel(230220320330);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1984:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘120110210220’ to ‘4146093228’ [-Woverflow]
 1984 |                                                         above = searchPixel(120110210220);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1985:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘220210310320’ to ‘1166978224’ [-Woverflow]
 1985 |                                                         rightUPpx = searchPixel(220210310320);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:1987:87: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1987 |                                                         leftpx->editColor(searchPixel(320321331330)->pxlColor);
      |                                                                                       ^~~~~~~~~~~~
main.cpp:1988:85: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1988 |                                                         init->editColor(searchPixel(321322332331)->pxlColor);
      |                                                                                     ^~~~~~~~~~~~
main.cpp:1989:88: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1989 |                                                         rightpx->editColor(searchPixel(322323333332)->pxlColor);
      |                                                                                        ^~~~~~~~~~~~
main.cpp:1990:89: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1990 |                                                         leftUPpx->editColor(searchPixel(310311321320)->pxlColor);
      |                                                                                         ^~~~~~~~~~~~
main.cpp:1991:86: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1991 |                                                         above->editColor(searchPixel(311312322321)->pxlColor);
      |                                                                                      ^~~~~~~~~~~~
main.cpp:1992:90: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1992 |                                                         rightUPpx->editColor(searchPixel(312313323322)->pxlColor);
      |                                                                                          ^~~~~~~~~~~~
main.cpp:1994:78: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 1994 |                                                         leftpx = searchPixel(320321331330);
      |                                                                              ^~~~~~~~~~~~
main.cpp:1995:76: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘321322332331’ to ‘3494752427’ [-Woverflow]
 1995 |                                                         init = searchPixel(321322332331);
      |                                                                            ^~~~~~~~~~~~
main.cpp:1996:79: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘322323333332’ to ‘200786132’ [-Woverflow]
 1996 |                                                         rightpx = searchPixel(322323333332);
      |                                                                               ^~~~~~~~~~~~
main.cpp:1997:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 1997 |                                                         leftUPpx = searchPixel(310311321320);
      |                                                                                ^~~~~~~~~~~~
main.cpp:1998:77: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘311312322321’ to ‘2074677009’ [-Woverflow]
 1998 |                                                         above = searchPixel(311312322321);
      |                                                                             ^~~~~~~~~~~~
main.cpp:1999:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘312313323322’ to ‘3075678010’ [-Woverflow]
 1999 |                                                         rightUPpx = searchPixel(312313323322);
      |                                                                                 ^~~~~~~~~~~~
main.cpp: In function ‘Cube CubeRotator(Cube, Rotation)’:
main.cpp:2040:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 2040 |                                 pixels[leftpx].editColor(pixels[n.searchPixel2(300301311310)].pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:2041:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 2041 |                                 pixels[numero].editColor(pixels[n.searchPixel2(310311321320)].pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:2042:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 2042 |                                 pixels[rightpx].editColor(pixels[n.searchPixel2(320321331330)].pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:2044:57: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘300301311310’ to ‘3948567886’ [-Woverflow]
 2044 |                                 leftpx = n.searchPixel2(300301311310);
      |                                                         ^~~~~~~~~~~~
main.cpp:2045:57: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘310311321320’ to ‘1073676008’ [-Woverflow]
 2045 |                                 numero = n.searchPixel2(310311321320);
      |                                                         ^~~~~~~~~~~~
main.cpp:2046:58: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘320321331330’ to ‘2493751426’ [-Woverflow]
 2046 |                                 rightpx = n.searchPixel2(320321331330);
      |                                                          ^~~~~~~~~~~~
main.cpp:2049:80: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 2049 |                                 pixels[numero].editColor(pixels[n.searchPixel2(131130230231)].pxlColor);
      |                                                                                ^~~~~~~~~~~~
main.cpp:2050:81: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 2050 |                                 pixels[rightpx].editColor(pixels[n.searchPixel2(231230330331)].pxlColor);
      |                                                                                 ^~~~~~~~~~~~
main.cpp:2053:57: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘131130230231’ to ‘2281211351’ [-Woverflow]
 2053 |                                 numero = n.searchPixel2(131130230231);
      |                                                         ^~~~~~~~~~~~
main.cpp:2054:58: warning: unsigned conversion from ‘long int’ to ‘unsigned int’ changes value from ‘231230330331’ to ‘3597063643’ [-Woverflow]
 2054 |                                 rightpx = n.searchPixel2(231230330331);
      |                                                          ^~~~~~~~~~~~
main.cpp: In member function ‘int Cube::searchPixel3(Pixel, int, int, int)’:
main.cpp:926:17: warning: control reaches end of non-void function [-Wreturn-type]
  926 |                 }
      |                 ^
main.cpp: In member function ‘int Cube::searchPixel2(unsigned int)’:
main.cpp:906:17: warning: control reaches end of non-void function [-Wreturn-type]
  906 |                 }
      |                 ^
main.cpp: In member function ‘Pixel* Cube::searchPixel(Pixel, int, int, int)’:
main.cpp:857:17: warning: control reaches end of non-void function [-Wreturn-type]
  857 |                 }
      |                 ^
main.cpp: In member function ‘Pixel* Cube::searchPixel(unsigned int)’:
main.cpp:899:17: warning: control reaches end of non-void function [-Wreturn-type]
  899 |                 }
      |                 ^
