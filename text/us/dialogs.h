// Parameters: dialog enum ID, (unused), lines per box, left offset, width
//Traducción al español de España. Puedes utilizarla como base para hacer una traducción separada
//al español latinoamericano, sin problema.

//These variables are completely useless for my translation, so I'll just comment them out.
//The point of these variables is to account for the differences between the UK and US English text.
//But this is not the English text. I didn't use them at all in any of the dialogs. So they have no reason to exist.
/*#ifdef VERSION_EU
#define COMRADES "amigos"
#define PLASTERED "aplastado"
#define SCAM_ME "hacer\ntrampas"
#define SCRAM "piérdete"
#define YOU_CANT_SWIM_IN_IT "Es demasiado pesado\ncomo para nadar."
#define GIVE_UP "rendirse"
#else
#define COMRADES "amigos"
#define PLASTERED "aplastado"
#define SCAM_ME "hacer\ntrampas. "
#define SCRAM "Lárgate--"
#define YOU_CANT_SWIM_IN_IT "No te permite nadar."
#define GIVE_UP "Dar"
#endif*/

DEFINE_DIALOG(DIALOG_000, 1, 6, 30, 200, _("\
¡Guau! Has acabado en\n\
mitad de un campo de\n\
batalla. Encontrarás las\n\
estrellas que Bowser robó\n\
dentro de los mundos\n\
de los cuadros.\n\
Primero, habla con\n\
este amable Bob-omb.\n\
([B] para hablar). Te\n\
ayudará, y también\n\
sus camaradas en otros\n\
lugares.\n\
Para leer carteles,\n\
párate, míralos y pulsa\n\
[B] Pulsa [A] o [B]\n\
para seguir leyendo. \n\
Puedes hablar con algunos\n\
personajes mirándoles\n\
y pulsando [B]."))

DEFINE_DIALOG(DIALOG_001, 1, 4, 95, 200, _("\
¡Ten cuidado! ¡Si\n\
merodeas por aquí, es\n\
muy probable que seas\n\
víctima de una bomba\n\
de agua!\n\
¡A esos Bob-omb\n\
enemigos les encanta\n\
luchar, y siempre están\n\
buscando nuevas maneras\n\
de atacar.\n\
Este prado lleva siendo\n\
un campo de batalla\n\
desde que el Gran\n\
Bob-Omb puso sus\n\
garras en la \n\
Estrella de Poder\n\
¿Podrías recuperar la\n\
estrella por nosotros?\n\
Cruza el puente y ve\n\
hacia la izquierda\n\
por el camino para\n\
llegar hasta el Gran\n\
Bob-Omb. Por favor,\n\
ven a verme otra vez\n\
cuando hayas conseguido\n\
la Estrella de Poder."))

DEFINE_DIALOG(DIALOG_002, 1, 4, 95, 200, _("\
¡Hey, tú! ¡Es peligroso\n\
seguir adelante, así que\n\
escucha lo que tengo\n\
que decirte!\n\
Cruza los dos puentes\n\
que hay más adelante,\n\
y tras cruzar, ten\n\
cuidado con las bombas\n\
de agua que están\n\
cayendo.\n\
El Gran Bob-omb en lo\n\
alto de la montaña\n\
es muy fuerte: ¡no\n\
dejes que te coja!\n\
Somos Bob-omb amigables,\n\
y estamos de tu lado.\n\
¡Puedes hablarnos\n\
siempre que quieras!"))

DEFINE_DIALOG(DIALOG_003, 1, 6, 95, 200, _("\
¡Gracias, Mario! ¡El Gran\n\
Bob-omb ya no es más que\n\
el gran abombao! Pero la\n\
batalla por el castillo no\n\
ha hecho más que empezar.\n\
\n\
Hay otros enemigos que\n\
tienen Estrellas de Poder.\n\
Si consigues más\n\
Estrellas, ¡podrás abrir\n\
más puertas que conducen\n\
a nuevos mundos!\n\
Mis amigos Bob-omb te\n\
están esperando. Asegúrate\n\
de hablar con ellos: te \n\
prepararán los cañones."))

DEFINE_DIALOG(DIALOG_004, 1, 3, 95, 200, _("\
Somos Bob-omb amantes de\n\
la paz, así que no usamos\n\
los cañones.\n\
Pero si quieres salir\n\
disparado, no hay.\n\
problema. Ponte cómodo.\n\
Prepararemos los cañones\n\
de esta área para que.\n\
puedas utilizarlos\n\
¡Bon voyage!"))

DEFINE_DIALOG(DIALOG_005, 1, 3, 30, 200, _("\
¡Oye, Mario! ¿Es verdad\n\
que derrotaste al Gran\n\
Bob-omb? ¡Guay!\n\
Debes ser fuerte. Y\n\
rápido. Pero, ¿cómo de\n\
rápido, eh?\n\
¿Lo suficiente para vencer\n\
a Koopa el Rápido? No \n\
creo. Venga, inténtalo.\n\
¿Qué tal una carrera a la\n\
cima de la montaña, donde\n\
estaba el Gran Bob-omb?\n\
¿Qué me dices? ¿Tienes\n\
agallas para enfrentarte a\n\
este koorredor?\n\
Cuando diga\n\
『Ya,』 ¡empezamos!\n\
\n\
Preparados, listos...\n\
\n\
//¡Ya!////Te esperas"))

DEFINE_DIALOG(DIALOG_006, 1, 4, 30, 200, _("\
¡¡¡Oye!!! ¡No intentes\n\
colármela! Tienes que\n\
hacer el recorrido\n\
completo. Venga, chao.\n\
Ya me avisarás\n\
cuando quieras echar\n\
una carrera de verdad."))

DEFINE_DIALOG(DIALOG_007, 1, 5, 30, 200, _("\
Hufff...fff...pufff...\n\
¡Guau! Eres...muy...\n\
¡rápido! ¡Apenas te vi!\n\
Aquí tienes: te lo has\n\
ganado, sin duda.!"))

DEFINE_DIALOG(DIALOG_008, 1, 5, 30, 200, _("\
CUIDADO CON CHOMP\n\
CADENAS ¡PELIGRO\n\
EXTREMO!\n\
\n\
\n\
Acércate y pulsa [C]^\n\
para mirarle mejor.\n\
Da miedito, ¿eh?\n\
¿Ves la moneda roja\n\
encima del poste?\n\
Si consigues ocho\n\
una Estrella de\n\
Poder aparecerá en el\n\
prado, pasado el puente."))

DEFINE_DIALOG(DIALOG_009, 1, 5, 30, 200, _("\
¡Cuánto tiempo!\n\
Madré mía, sí que te has\n\
vuelto rápido, ¿eh?\n\
¿Has estado entrenando en\n\
secreto, o es por el\n\
poder de las Estrellas?\n\
\n\
Lo de perder la última\n\
carrera me ha dejado un\n\
poco desanimado. Pero si\n\
echásemos una carrera\n\
aquí, estaría jugando en\n\
casa. ¿Te atreves con\n\
una revancha?\n\
//Vamos//// Paso"))

DEFINE_DIALOG(DIALOG_010, 1, 4, 30, 200, _("\
Has accionado el botón\n\
de la Gorra Voladora.\n\
Con ella, puedes surcar\n\
los cielos. A partir de\n\
ahora, cuando rompas un\n\
bloque rojo, encontrarás\n\
una Gorra Voladora.\n\
\n\
¿Quieres guardar?\n\
\n\
//Sí////No"))

DEFINE_DIALOG(DIALOG_011, 1, 4, 30, 200, _("\
¡Acabas de accionar el\n\
botón de la Gorra de\n\
Metal! Esta gorra hace\n\
a Mario invencible.\n\
A partir de ahora,\n\
aparecerán gorras de\n\
metal de los bloques\n\
verdes que rompas.\n\
¿Quieres guardar?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_012, 1, 4, 30, 200, _("\
Acabas de accionar el\n\
botón de la gorra de\n\
invisibilidad. Esta gorra\n\
hace desaparecer a Mario.\n\
Ahora habrán gorras de\n\
invisibilidad en los\n\
bloques azules.\n\
\n\
¿Quieres guardar?\n\
\n\
//Sí////No"))

DEFINE_DIALOG(DIALOG_013, 1, 5, 30, 200, _("\
¡Has conseguido 100\n\
monedas! Mario consigue\n\
más poder del castillo.\n\
¿Quieres guardar?\n\
//Sí////No"))

DEFINE_DIALOG(DIALOG_014, 1, 4, 30, 200, _("\
¡Guau! ¡Otra Estrella de\n\
poder! Gracias al poder\n\
del castillo, Marío está\n\
más decidido que nunca.\n\
¿Quieres guardar?\n\
\n\
//Claro//Luego"))

DEFINE_DIALOG(DIALOG_015, 1, 4, 30, 200, _("\
Puedes darle un puñetazo\n\
para derribarlos. Pulsa\n\
[A] para saltar, y [B]\n\
para dar un puñetazo.\n\
Para recoger algo, pulsa\n\
[B]. Si quieres tirar lo\n\
que has cogido, vuelve a\n\
pulsar [B]."))

DEFINE_DIALOG(DIALOG_016, 1, 4, 30, 200, _("\
¡Súbete a esa concha y\n\
dirígela hacia donde\n\
quieras! ¡Arroya a tus\n\
enemigos!"))

DEFINE_DIALOG(DIALOG_017, 1, 6, 30, 200, _("\
Soy el Gran Bob-Omb,\n\
dueño y señor de toda la\n\
materia disparable, ¡el\n\
rey de las explosiones\n\
y los disparos de todo\n\
el mundo.\n\
¿Cómo te atreves a subir\n\
aquí? ¿Quién te ha\n\
dado derecho a pisar mi\n\
imperio montañil?\n\
\n\
\n\
Puedes que hayas eludido\n\
a mis guardias, pero te\n\
aseguro que no escaparás\n\
de esta bola\n\
explosiva...\n\
\n\
...¡y nunca te llevarás mi\n\
Estrella de Poder! Por la\n\
presente, ¡te reto a que\n\
lo intentes, Mario!\n\
\n\
\n\
Si quieres la Estrella de\n\
Poder, deberás de\n\
demostrar tu valor en el\n\
campo de batalla.\n\
\n\
\n\
¿Serás capaz de levantar\n\
mi peso y hacerme besar\n\
el suelo? ¡Lo dudo\n\
mucho!\n\
¡Desembomba!"))

DEFINE_DIALOG(DIALOG_018, 1, 4, 30, 200, _("\
Estoy durmiendo porque...\n\
...tengo sueño. No quiero\n\
que nadie me despierte.\n\
No hagas ruido al\n\
caminar."))

DEFINE_DIALOG(DIALOG_019, 1, 2, 30, 200, _("\
¡Shhh! ¡No corras por\n\
los pasillos!"))

DEFINE_DIALOG(DIALOG_020, 1, 6, 95, 150, _("\
Querido Mario:\n\
Por favor, ven al\n\
castillo. He preparado\n\
una tarta para ti.\n\
Atentamente--\n\
Princesa Toadstool"))

DEFINE_DIALOG(DIALOG_021, 1, 5, 95, 200, _("\
¡Hola!.\n\
¡No hay nadie en casa!\n\
Ahora LÁRGATE, ¡y no\n\
vuelvas jamás!\n\
¡Ja ja ja!"))

DEFINE_DIALOG(DIALOG_022, 1, 2, 95, 200, _("\
Necesitas una llave para\n\
abrir esta puerta."))

DEFINE_DIALOG(DIALOG_023, 1, 3	, 95, 200, _("\
¡Esta llave no encaja!\n\
¿Igual es para el\n\
sótano?"))

DEFINE_DIALOG(DIALOG_024, 1, 6, 95, 200, _("\
Necesitas más poder de\n\
las Estrellas para abrir\n\
esta puerta. Recupera\n\
Estrellas de Poder en\n\
los mundos de los cuadros\n\
del castillo."))

DEFINE_DIALOG(DIALOG_025, 1, 4, 95, 200, _("\
Para abrir esta puerta,\n\
necesitas el poder de 3\n\
Estrellas. Te faltan [%]\n\
Estrellas."))

DEFINE_DIALOG(DIALOG_026, 1, 4, 95, 200, _("\
Para abrir esta puerta,\n\
necesitas el poder de 8\n\
Estrellas. Te faltan [%]\n\
Estrellas."))

DEFINE_DIALOG(DIALOG_027, 1, 4, 95, 200, _("\
Para abrir esta puerta,\n\
necesitas el poder de 30\n\
Estrellas. Te faltan [%]\n\
Estrellas."))

DEFINE_DIALOG(DIALOG_028, 1, 4, 95, 200, _("\
Para abrir esta puerta,\n\
necesitas el poder de 50\n\
Estrellas. Te faltan [%]\n\
Estrellas."))

DEFINE_DIALOG(DIALOG_029, 1, 5, 95, 200, _("\
Si pretendes subir hasta\n\
lo alto de las escaleras\n\
『infinitas』, necesitarás\n\
70 Estrellas\n\
¡Muajajaja!"))

DEFINE_DIALOG(DIALOG_030, 1, 6, 30, 200, _("\
¡Hola! Somos los Hermanos\n\
Lakitu, ¡en comentando el\n\
progreso de Mario en\n\
directo! Va a aprender una\n\
nueva técnica para no\n\
alertar a sus enemigos.\n\
El truco consiste en\n\
caminar muy despacio\n\
para no hacer ruido\n\
\n\
\n\
\n\
Y para terminar de\n\
comentar en las técnicas\n\
de grabación, puedes usar\n\
[C]> y [C]< para mirar a\n\
tu alrededor. Pulsa [C]|\n\
para ver la acción desde\n\
lejos. Cuando no puedas \n\
mover más la cámara, \n\
oirás un sonido. Aquí los\n\
hermanos Lakitu,\n\
despidiéndose."))

DEFINE_DIALOG(DIALOG_031, 1, 6, 30, 200, _("\
¡No puede ser!¡Me has\n\
ganado...¡otra vez! ¡Y\n\
eso que me he gastado\n\
todos mis ahorros en\n\
estos zapatos\n\
koopasónicos!\n\
En fin, supongo que\n\
tendré que darle esta\n\
Estrella al ganador de\n\
la carrera.\n\
¡Felicidades, Mario!"))

DEFINE_DIALOG(DIALOG_032, 1, 5, 30, 200, _("\
Si consigues la Gorra\n\
Voladora, podrás...\n\
¡exacto, volar! Solo\n\
tienes que dar un triple\n\
salto, es decir, saltar\n\
tres veces seguidas,\n\
para despegar.\n\
Con un cañón, ¡podrías\n\
volar todavía más alto!\n\
\n\
Usa los botones [C] para\n\
mirad a tu alrededor\n\
mientras vuelas, y pulsa\n\
[Z] para aterrizar."))

DEFINE_DIALOG(DIALOG_033, 1, 7, 30, 200, _("\
¡Hola! Has llegado al\n\
castillo de la Princesa\n\
Peach a través de una\n\
tubería. Controlar a\n\
Mario es muy sencillo.\n\
\n\
\n\
Pulsa [A] para saltar\n\
y [B] para atacar. [B]\n\
también sirve para leer\n\
carteles. Usa el stick\n\
analógico para mover\n\
a Mario. Ahora, ve al\n\
castillo."))

DEFINE_DIALOG(DIALOG_034, 1, 6, 30, 200, _("\
Buenas tardes. Somos los\n\
hermanos Lakitu,\n\
comentando en directo\n\
desde el exterior del\n\
castillo de la princesa.\n\
\n\
Mario acaba de llegar\n\
y vamos a grabarle en\n\
directo mientras entra al\n\
castillo y busca las\n\
Estrellas de Poder\n\
perdidas.\n\
Como cámara con\n\
experiencia que soy,\n\
grabaré desde el ángulo\n\
recomendado, pero puedes\n\
cambiar el ángulo de\n\
la cámara con [C]\n\
Si no podemos movernos\n\
más, te avisaremos con\n\
un sonido. Para echar un\n\
vistazo a tus\n\
alrededores, párate y\n\
pulsa [C]^\n\
De momento, esto ha sido\n\
todo. Seguiremos en\n\
directo la aventura de\n\
Mario."))

DEFINE_DIALOG(DIALOG_035, 1, 5, 30, 200, _("\
Hay cuatro botones de\n\
cámara, también llamados\n\
botones [C]. Pulsa [C]^\n\
para mirar a tu alrededor\n\
con el stick de control.\n\
Normalmente verás a Mario\n\
a través de la cámara de\n\
Lakitu. Esta es la cámara\n\
recomendada para jugar\n\
casi siempre.\n\
Puedes cambiar el ángulo\n\
pulsando [C]>. Si pulsas\n\
[R], la vista cambia a la\n\
cámara de Mario, que está\n\
justo detrás de él.\n\
Si vuelves a pulsar [R],\n\
volverás a la cámara de\n\
Lakitu.\n\
\n\
\n\
Pulsa [C]| para ver a\n\
Mario desde lejos, tanto\n\
con la cámara de Lakitu\n\
como la de Mario."))

DEFINE_DIALOG(DIALOG_036, 1, 6, 30, 200, _("\
PLATAFORMA DE OBSERVACIÓN\n\
Pulsa [C]^ para admirar\n\
las vistas. ¡Aprovecha la\n\
ocasión mira bien!\n\
Pulsa [R] para cambiar a\n\
la cámara de Mario.\n\
Esta vista siempre sigue\n\
a Mario. Vuelve a pulsar\n\
[R] para volver a la\n\
cámara de Lakitu. Si \n\
pausas el juego, puedes\n\
cambiar el modo de la \n\
cámara para que se \n\
quede 『fija』 en un sitio\n\
al pulsar [R]. ¡Pruébalo!"))

DEFINE_DIALOG(DIALOG_037, 1, 2, 30, 200, _("\
¡Te he ganado! ¡Y tú has\n\
perdido! ¡Jajaja!\n\
No se te da mal, pero\n\
a mí se me da mejor.\n\
¡Que tengas más suerte\n\
la próxima vez!"))

DEFINE_DIALOG(DIALOG_038, 1, 4, 95, 200, _("\
La puerta está\n\
reaccionando al poder de\n\
la Estrella, y se empieza\n\
a abrir lentamente."))

DEFINE_DIALOG(DIALOG_039, 1, 4, 30, 200, _("\
Por decreto del Gran\n\
Bob-Omb, no se permiten\n\
visitas.\n\
\n\
Jamás renunciaré a mis\n\
Estrellas, ya que\n\
contienen el poder del\n\
castillo.\n\
Fueron un regalo del Rey\n\
Koopa, el mismísimo\n\
Bowser, y están muy bien\n\
escondidas.\n\
De ninguna manera diré\n\
dónde se encuentran...\n\
Bueno, venga, pero solo\n\
una pista:\n\
Atento a los nombres\n\
de las estrellas al\n\
comienzo de cada mundo.\n\
//--El Gran Bob-omb"))

DEFINE_DIALOG(DIALOG_040, 1, 3, 30, 200, _("\
¡Peligro! ¡Puente roto!\n\
¡Precipicio bien frío\n\
justo debajo!"))

DEFINE_DIALOG(DIALOG_041, 1, 4, 30, 200, _("\
¡He ganado! ¡Y tú has\n\
perdido! ¡Ja ja ja!\n\
\n\
\n\
Eso es lo que te llevas\n\
por meterte con Koopa el\n\
Rápido. ¡Que tengas más\n\
suerte la próxima vez!"))

DEFINE_DIALOG(DIALOG_042, 1, 5, 30, 200, _("\
¡Cuidado! ¡Puente muy\n\
estrecho!¡Cruza\n\
lentamente!\n\
\n\
\n\
Puedes saltar al bordillo\n\
del precipicio y colgarte\n\
él, y tras eso, puedes\n\
subir lentamente si\n\
mueves el stick de control\n\
hacia delante, o de un\n\
salto si pulsas A.\n\
Cuando quieras dejarte\n\
caer, pulsa [Z] o mueve\n\
el stick de control en la\n\
dirección contraria a la\n\
que mira Mario."))

DEFINE_DIALOG(DIALOG_043, 1, 5, 30, 200, _("\
Si saltas y mantienes\n\
pulsado [A], puedes\n\
colgarte de ciertos\n\
objetos que tengas\n\
encima.\n\
¡Tal vez incluso podrías\n\
colgarte de un pájaro\n\
en pleno vuelo!"))

DEFINE_DIALOG(DIALOG_044, 1, 4, 95, 200, _("\
¿Quién anda ahí? ¿Quién\n\
me ha despertado? ¡Aún\n\
es de día, debería estar\n\
durmiendo!\n\
Bueno, ya estoy despierto,\n\
así que de perdidos al\n\
río. ¿Quieres volar\n\
conmigo?\n\
Pulsa y mantén [A] para\n\
agarrarte a mí. Suelta\n\
[A] para soltarte.\n\
\n\
Te llevaré hasta donde\n\
quieras, siempre que mis\n\
alas puedan aguantar tu\n\
peso... sin ofender.\n\
Atento a mi sombra, ¡y\n\
agárrate fuerte!"))

DEFINE_DIALOG(DIALOG_045, 1, 6, 95, 200, _("\
¡Mi madre! No puedo más.\n\
¡Relájate con la pasta\n\
Mario! Hasta aquí\n\
hemos llegado. Pulsa\n\
[A] para soltarte, por\n\
favor. Bueno, ¡adiós!"))

DEFINE_DIALOG(DIALOG_046, 1, 6, 30, 200, _("\
Tienes que dominar tres\n\
técnicas de salto muy\n\
importantes. Primero,\n\
vamos con el triple\n\
salto.\n\
\n\
Coge carrerilla, y salta\n\
tres veces. ¡Uno, dos,\n\
tres! Si sincronizas bien\n\
los saltos, darás un\n\
pequeño salto, luego uno\n\
un poco más alto,\n\
y luego uno enorme.\n\
Vale, ahora toca el salto\n\
largo. Corre, pulsa [Z]\n\
para agacharte y luego\n\
pulsa [A] para saltar muy\n\
lejos.\n\
Para hacer el salto en\n\
pared, salta hacia una\n\
pared y luego vuelve a\n\
saltar cuando la toques.\n\
\n\
\n\
¿Lo pillaste? Triple\n\
salto, salto largo, y\n\
salto en pared. Ahora,\n\
practícalo sin parar.\n\
No tienes ninguna\n\
posibilidad sin dominarlo."))

DEFINE_DIALOG(DIALOG_047, 1, 2, 95, 200, _("\
¡Hola! ¡Te prepararé\n\
los cañones!"))

DEFINE_DIALOG(DIALOG_048, 1, 6, 30, 200, _("\
Mensaje de la Cumbre de\n\
la Montaña Helada:\n\
¡Cuidado con el suelo, que\n\
resbala! Por favor, entra\n\
al refugio antes de hacer\n\
nada."))

DEFINE_DIALOG(DIALOG_049, 1, 5, 30, 200, _("\
¿Recuerdas esa complicada\n\
técnica llamada salto\n\
en pared? Tendrás que\n\
dominarla para llegar a\n\
sitios altos.\n\
Podrás saltar de pared\n\
en pared. Mueve el stick\n\
en la dirección en la\n\
que quieras rebotar\n\
para ganar impulso.\n\
¡Lo dominarás con la\n\
práctica!"))

DEFINE_DIALOG(DIALOG_050, 1, 5, 30, 200, _("\
Mantén pulsado [Z] para\n\
agacharte y deslizarte por\n\
una cuesta. O pulsa [Z]\n\
cuando estés en el aire\n\
para dar un pisotón.\n\
Si te paras, te agachas,\n\
y saltas, ¡harás una\n\
pirueta giratoria!\n\
¿Lo pillas?\n\
¡Pues hay más! Mientras\n\
corres, agáchate y salta,\n\
y harás un salto largo.\n\
O agáchate y camina\n\
para...\n\
Mira, déjalo."))

DEFINE_DIALOG(DIALOG_051, 1, 6, 30, 200, _("\
¡Trepar es fácil! Cuando\n\
saltas hacia un árbol,\n\
un palo o un pilar, te\n\
agarrarás a él\n\
automáticamente. Pulsa A\n\
para saltar hacia atrás.\n\
Para rotar alrededor del\n\
objeto, mueve el stick de\n\
control. Cuando llegues\n\
a lo más alto, ¡mueve el\n\
stick hacia arriba para\n\
apoyarte en tus manos!\n\
Mientras estás en esa\n\
posición, pulsa A y\n\
saltarás con más estilo\n\
que nadie."))

DEFINE_DIALOG(DIALOG_052, 1, 5, 30, 200, _("\
Párate y pulsa [Z] para\n\
agacharte, y luego pulsa\n\
[A] para hacer una pirueta\n\
giratoria.\n\
\n\
Para hacer una pirueta\n\
lateral, corre, date la\n\
vuelta rápidamente, y\n\
salta. Ambos saltos te\n\
permiten llegar muy alto."))

DEFINE_DIALOG(DIALOG_053, 1, 5, 30, 200, _("\
A veces, si pasas por\n\
dentro de un anillo de\n\
monedas o encuentras un\n\
secreto en un mundo,\n\
aparecerá un número rojo.\n\
¡Si encuentras los cinco\n\
números rojos, aparecerá\n\
una Estrella oculta!"))

DEFINE_DIALOG(DIALOG_054, 1, 6, 30, 200, _("\
¡Bienvenido al tobogán de\n\
nieve! ¡Salta! Para\n\
acelerar, mueve el stick\n\
de control hacia delante.\n\
Para frenar, muévelo\n\
hacia detrás."))

DEFINE_DIALOG(DIALOG_055, 1, 4, 30, 200, _("\
¡Oye, oye, Mario, fiera!\n\
¿Cómo te va? Vamos,\n\
acelera. Pareces un tío\n\
rápido. Reconozco la\n\
velocidad cuando la veo,\n\
sí señor: ¡Soy el\n\
kooredor más rápido del\n\
mundo! ¿Lo sabías?\n\
¿Echamos una carrera?\n\
Preparados, listos...\n\
\n\
//¡Ya!//// Pasando"))

DEFINE_DIALOG(DIALOG_056, 1, 6, 30, 200, _("\
Has r-r-r-¡Has roto mi\n\
record! ¡Increíble!\n\
Ya sabía que eras el más\n\
guay, ¡pero ahora has\n\
demostrado que también\n\
eres el más rápido!\n\
No tengo presupuesto\n\
para una medalla de oro,\n\
pero toma, una Estrella.\n\
¡Te la has ganado!"))

DEFINE_DIALOG(DIALOG_057, 1, 6, 30, 200, _("\
¡Socorro! ¡Mi bebé! ¿Has\n\
visto a mi bebé? ¡Es la\n\
niña más preciosa del\n\
mundo mundial! ¿Eh?\n\
¿Que te la describa?\n\
\n\
¡Pero si te la acabo\n\
de describir! ¡La más\n\
guapa! ¿No te vale con\n\
eso? Bueno, pues...\n\
¡Tiene el pico igualito\n\
al mío!\n\
¿Que cómo se perdió?\n\
A ver, a ver...\n\
Me paré a por un arenque\n\
y unos cubos de hielo...\n\
y entonces...\n\
\n\
¡Ay! ¡No me acuerdo!\n\
¡Tú búscala, por favor!\n\
¡Seguro que la reconoces!"))

DEFINE_DIALOG(DIALOG_058, 1, 4, 30, 200, _("\
¡Has encontrado a mi\n\
preciada niña! ¿Dónde\n\
has estado? ¿Cómo te lo\n\
puedo agradecer, Mario?\n\
Ahora que lo pienso,\n\
tengo una... Estrella.\n\
Te la daré, junto a mi\n\
eterna gratitud."))

DEFINE_DIALOG(DIALOG_059, 1, 5, 30, 200, _("\
¡Esa no es mi niña! ¿Es\n\
que no ves que no se me\n\
parece en nada? ¡Sus\n\
padres deben estar muy\n\
preocupados!"))

DEFINE_DIALOG(DIALOG_060, 1, 4, 30, 200, _("\
¡Atención!\n\
¡Leer antes de bucear!\n\
\n\
\n\
Si estás bajo el agua\n\
demasiado rato, te\n\
quedarás sin oxígeno.\n\
\n\
Vuelve a la superficie a\n\
por aire, o encuentra\n\
burbujas y monedas para\n\
respirar bajo el agua.\n\
Pulsa [A] para nadar.\n\
Mantén pulsado [A] para\n\
nadar a un ritmo suave.\n\
Pulsa [A] repetidamente\n\
para nadar rápido.\n\
Mueve el stick de control\n\
hacia arriba y pulsa [A]\n\
para bucear.\n\
Mueve el stick de control\n\
hacia abajo y pulsa [A]\n\
para volver a la\n\
superficie,\n\
\n\
Mantén el stick de control\n\
hacia abajo y pulsa A\n\
mientras estés en la\n\
superficie para salir."))

DEFINE_DIALOG(DIALOG_061, 1, 4, 30, 200, _("\
¡BRRR! ¡Peligro de\n\
congelamiento! No entrar\n\
en el agua. Va en serio.\n\
/--El Pingüino"))

DEFINE_DIALOG(DIALOG_062, 1, 3, 30, 200, _("\
Dentro del bloque verde\n\
se oculta la increíble\n\
Gorra de Metal.\n\
Con ella, no podrás\n\
quemarte y podrás ignorar\n\
los ataques enemigos.\n\
Ni siquiera necesitarás\n\
respirar si la llevas\n\
puesta.\n\
Pero tiene un defecto:\n\
NO TE PERMITE NADAR."))

DEFINE_DIALOG(DIALOG_063, 1, 6, 30, 200, _("\
La Gorra de Invisibilidad\n\
está dentro del bloque\n\
azul.\n\
Ni siquiera yo, Don Ojo,\n\
podré verte si la usas,\n\
ya que te hará invisible.\n\
Incluso podrás sorprender\n\
a los Boo, y también te\n\
permite atravesar ciertas\n\
paredes secretas."))

DEFINE_DIALOG(DIALOG_064, 1, 6, 30, 200, _("\
Cuando te pongas la Gorra\n\
Voladora, que sale de los\n\
bloques rojos, haz un\n\
triple salto para surcar\n\
el cielo azul.\n\
\n\
Usa el stick de control\n\
para guiar a Mario.\n\
Muévelo hacia detrás para\n\
elevarte, hacia arriba\n\
para descender, y [Z]\n\
para aterrizar."))

DEFINE_DIALOG(DIALOG_065, 1, 6, 30, 200, _("\
¡Clase de natación!!\n\
Pulsa repetidamente [A]\n\
para hacer el nado del\n\
delfín. Si lo pulsas al\n\
ritmo adecuado, nadarás\n\
más rápido.\n\
Mantén pulsado [A] para\n\
nadar despacito con\n\
los pies. Mueve el\n\
stick de control hacia\n\
arriba para descender, y\n\
abajo para descender.\n\
Para salir del agua,\n\
mantén el stick hacia\n\
abajo cuando estés en la\n\
superficie y pulsa [A]\n\
Más fácil que quitarle el\n\
caramelo a un niño, ¿eh?\n\
Pero recuerda: ¡Mario no\n\
puede respirar bajo el\n\
agua! Vuelve a la\n\
superficie cuando tengas\n\
poca vida.\n\
\n\
Y una última cosa: No\n\
puedes abrir puertas que\n\
estén bajo el agua."))

DEFINE_DIALOG(DIALOG_066, 1, 6, 30, 200, _("\
Mario, ¡soy Peach! ¡Ten\n\
cuidado! ¡Bowser está\n\
loco! Te intentará quemar\n\
con su horrible aliento de\n\
fuego.\n\
\n\
Colócate detrás de él y\n\
cógelo por la cola con el\n\
botón [B]. Después,\n\
usa el stick de control\n\
para hacerle dar vueltas\n\
sin parar.\n\
Cuanto más rápido muevas\n\
el stick, más lejos\n\
volará cuando lo sueltes\n\
volviendo a pulsar [B]\n\
\n\
Recuerda que puedes usar\n\
los botones [C] para\n\
mirar a tu alrededor.\n\
Tienes que lanzar a\n\
Bowser a una de las\n\
bombas de las esquinas.\n\
Recuerda: Apunta bien, y\n\
pulsa [B] en el momento\n\
adecuado para lanzarlo.\n\
¡Buena suerte, Mario!\n\
Estamos en tus manos."))

DEFINE_DIALOG(DIALOG_067, 1, 6, 30, 200, _("\
Lo siento, Mario, ¡tu\n\
princesa está en otro\n\
castillo! ¡Ja ja ja!\n\
Venga, ¡intenta cogerme\n\
de la cola!\n\
\n\
¡No serás capaz ni de\n\
levantarme! ¡Un blandengue\n\
como tú jamás sería capaz\n\
de lanzar a alguien como\n\
YO! ¡Jamás! ¡Ja!"))

DEFINE_DIALOG(DIALOG_068, 1, 5, 30, 200, _("\
¡Estás en la Tierra de!\n\
Lava! Si te prendes fuego\n\
o caes en una masa de\n\
lava, ¡empezarás a botar\n\
sin parar!\n\
¡Pero aún así puedes\n\
controlar a Mario! ¡Lo\n\
importante es que no\n\
pierdas la calma!"))

DEFINE_DIALOG(DIALOG_069, 1, 6, 30, 200, _("\
A veces, mientras vuelas,\n\
es posible que te\n\
estrelles contra un muro\n\
invisible en los límites\n\
de los mundos de los\n\
cuadros.\n\
Si te estrellas contra\n\
uno de estos muros\n\
mientras vuelas,\n\
rebotarás hacia atrás"))

DEFINE_DIALOG(DIALOG_070, 1, 5, 30, 200, _("\
Puedes volver a la sala\n\
principal del castillo\n\
cuando quieras desde\n\
cualquiera de los mundos\n\
de los cuadros.\n\
Solo tienes que quedarte\n\
quieto en el suelo,\n\
pulsar Start para pausar,\n\
y luego seleccionar\n\
『Salir del nivel.』\n\
No hace falta conseguir\n\
todas las Estrellas de\n\
Poder en un mundo para\n\
pasar al siguiente.\n\
\n\
Puedes volver más\n\
adelante, cuando tengas\n\
más experiencia, para\n\
coger las que se te hagan\n\
muy complicadas.\n\
Cuando consigas una\n\
Estrella y vuelvas a\n\
entrar al mundo,\n\
aparecerá una pista\n\
para la siguiente.\n\
Pero no hace falta que\n\
las cojas en orden.\n\
Puedes coger cualquier\n\
estrella, no tiene que\n\
ser la de la pista."))

DEFINE_DIALOG(DIALOG_071, 1, 4, 30, 200, _("\
¡Peligro!\n\
¡Cuidado con la nube\n\
extraña! ¡No respires el\n\
aire!\n\
Si te sientes mareado,\n\
corre a terreno más\n\
elevado y respira aire\n\
limpio.\n\
Círculo: Refugio\n\
Flecha: Entrada o salida"))

DEFINE_DIALOG(DIALOG_072, 1, 5, 30, 200, _("\
¡Peligro! ¡Viento fuerte!\n\
Sujeta bien tu gorra.\n\
Si se te cae, tendrás\n\
que buscarla por toda la\n\
montaña."))

DEFINE_DIALOG(DIALOG_073, 1, 5, 95, 200, _("\
¡Aarrgh! Zaludos, pirata.\n\
Tengo un tezoro oculto,\n\
vaya que zí.\n\
\n\
\n\
Pero ziento dezirte que\n\
si pretendes echarle la\n\
zarpa vas a tener que\n\
abrir los cofres del\n\
tezoro en el orden\n\
correcto.\n\
¿Que cual es el orden?\n\
¡Jajaja! ¡Jamás te lo \n\
diré, así que buena\n\
zuerte!\n\
//--El Capitán"))

DEFINE_DIALOG(DIALOG_074, 1, 6, 30, 200, _("\
Puedes agarrarte a un\n\
bordillo con las manos\n\
y quedarte colgado.\n\
\n\
\n\
\n\
Para dejarte caer del\n\
bordillo, puedes mover\n\
el stick de control en\n\
la dirección contraria a\n\
la que mira Mario, o\n\
pulsar [Z].\n\
Para subir a lo alto del\n\
bordillo, puedes mover el\n\
stick hacia arriba para\n\
subir lentamente, o\n\
pulsar [A] para subir\n\
de un salto."))

DEFINE_DIALOG(DIALOG_075, 1, 5, 30, 200, _("\
¡Mario! Mi castillo está\n\
en graves problemas. Sé\n\
que el culpable es Bowser\n\
y ¡sé que eres el único\n\
capaz de detenerle!\n\
Las puertas del castillo\n\
que han sido selladas por\n\
Bowser solo se pueden\n\
abrir con el poder de\n\
las Estrellas.\n\
Pero hay caminos ocultos\n\
en el castillo, que Bowser\n\
desconoce.\n\
\n\
\n\
¡Encuentra las Estrellas\n\
ocultas, Mario! Te\n\
ayudarán en tu misión.\n\
¡Por favor, Mario,\n\
ayúdanos!\n\
¡Reúne todas las\n\
estrellas del castillo y\n\
sácanos de esta horrible\n\
prisión! ¡Por favor!"))

DEFINE_DIALOG(DIALOG_076, 1, 6, 30, 200, _("\
Gracias al poder de las\n\
Estrellas, el castillo\n\
empieza a volver a la\n\
vida. Por favor, Mario,\n\
¡dale una lección a\n\
Bowser!\n\
Mira, deja que te cuente\n\
un secreto del castillo.\n\
En la habitación con el\n\
espejo, estate atento\n\
a ver si ves algo que\n\
solo existe en el espejo.\n\
Y cuando vayas a la\n\
Ciudad Mojaseca, puedes\n\
inundarla al entrar si \n\
entras por la parte\n\
superior del cuadro."))

DEFINE_DIALOG(DIALOG_077, 1, 3, 150, 200, _("\
Por decreto real, es\n\
obligatorio darle un\n\
pisotón a los pilares."))

DEFINE_DIALOG(DIALOG_078, 1, 5, 30, 200, _("\
Abre el contenedor de\n\
monedas azules dándole un\n\
pisotón con el botón [Z].\n\
Una moneda azul equivale\n\
a 5 monedas amarillas.\n\
Pero si no eres lo\n\
bastante rápido, ¡las\n\
monedas azules\n\
desaparecerán! ¿Te\n\
parece injusto?\n\
Pues te aguantas."))

DEFINE_DIALOG(DIALOG_079, 1, 4, 30, 200, _("\
¡Owwwuu! ¡Déjame ir!\n\
¡Uukee-kee! ¡Estaba de\n\
broma! ¿No tienes sentido\n\
del humor?\n\
Mira, hagamos un trato\n\
Si me dejas ir, te daré\n\
algo que te va a gustar.\n\
\n\
¿Qué te parece?\n\
\n\
//Soltar/ No soltar"))

DEFINE_DIALOG(DIALOG_080, 1, 1, 30, 200, _("\
¡Jejejeje!"))

DEFINE_DIALOG(DIALOG_081, 1, 4, 30, 200, _("\
Es un misterio si este\n\
lugar está seco o mojado.\n\
¿Y dónde se encuentra la\n\
solución a este dilema?\n\
Tal vez tenga que ver\n\
con la altura que tienen\n\
los visitantes en el\n\
momento de su llegada."))

DEFINE_DIALOG(DIALOG_082, 1, 4, 30, 200, _("\
¡No pierdas tu gorra! Si\n\
la pierdes, sufrirás más\n\
daño de lo normal.\n\
\n\
Si pierdes tu gorra,\n\
tendrás que encontrarla\n\
en el mismo mundo en el\n\
que la perdiste.\n\
Ay, lo de Peach no tiene\n\
buena pinta. Sigue\n\
atrapada en algún lugar,\n\
dentro de las paredes.\n\
¡Por favor, Mario, tienes\n\
que salvarla! ¿Sabías que\n\
hay mundos enemigos\n\
dentro de los cuadros?\n\
¡Sí, como lo oyes! Las\n\
tropas de Bowser están\n\
dentro de ellos. Ah, y\n\
toma esto. Para ti."))

DEFINE_DIALOG(DIALOG_083, 1, 6, 30, 200, _("\
Ese reloj tiene algo\n\
extraño. Intenta fijarte\n\
en la posición que tienen\n\
las manillas en el momento\n\
en el que entras. Por\n\
cierto, ¡toma esto!"))

DEFINE_DIALOG(DIALOG_084, 1, 4, 30, 200, _("\
¡Dios mío! ¡Dios mío!\n\
¡Voy a llegar tarde! ¡Y\n\
ahora va un enano bigotudo\n\
y me coge!\n\
¿Eh? ¿Esta cosa brillante?\n\
¡Es mía! ¡Quien la\n\
encuentra se la queda!\n\
¡Ahora suéltame!\n\
¡Que me sueltes te digo!\n\
Bueno, si tanto la\n\
quieres, ¡toma! Prefiero\n\
dártela.\n\
La otra opción es que la\n\
duquesa me ejecute por\n\
llegar tarde. ¡Ahora\n\
suéltame!"))

DEFINE_DIALOG(DIALOG_085, 1, 5, 30, 200, _("\
No tienes ninguna\n\
posibilidad de salir vivo\n\
de esta mansión. Si\n\
consigues salir, sería...\n\
digno de medalla."))

DEFINE_DIALOG(DIALOG_086, 1, 6, 30, 200, _("\
Algunos enemigos tienen\n\
el estómago muy sensible.\n\
Si les obligas a dar\n\
vueltas sin parar, tal\n\
vez se mareen y te dejen\n\
en paz."))

DEFINE_DIALOG(DIALOG_087, 1, 5, 30, 200, _("\
¡Santa Claus no es el\n\
único que puede bajar por\n\
las chimeneas! ¡Ven!\n\
/--El propietario del\n\
refugio."))

DEFINE_DIALOG(DIALOG_088, 1, 5, 30, 200, _("\
Ascensor de trabajo.\n\
Para quien se baje aquí:\n\
Agárrate al tubo de la\n\
izquierda y deslízate con\n\
cuidado hacia abajo."))

DEFINE_DIALOG(DIALOG_089, 1, 6, 95, 200, _("\
¡Peligro en ambas\n\
direciones! ¡Cuidado con\n\
dónde pisas! Quien no\n\
sepa hacer el salto\n\
largo, debe ir a\n\
la derecha.\n\
Derecha: Ascensor.\n\
/// Laberinto gaseoso\n\
Izquierda: Agujero Negro\n\
///Lago subterráneo\n\
\n\
\n\
Círculo rojo: Ascensor 2\n\
//// Lago subterráneo\n\
Flecha: Tu posición"))

DEFINE_DIALOG(DIALOG_090, 1, 5, 30, 200, _("\
¡Ja ja ja! ¡Has caído de\n\
lleno en mi trampa, tal\n\
y como esperaba! Un\n\
consejo, 『amigo,』\n\
¡cuidado con dónde pisas!"))

DEFINE_DIALOG(DIALOG_091, 2, 2, 30, 200, _("\
¡Peligro! ¡Corrientes\n\
fuertes!\n\
Pero el viento también\n\
se puede aprovechar."))

DEFINE_DIALOG(DIALOG_092, 1, 5, 30, 200, _("\
¿Vienes otra vez a tocar\n\
las narices, Mario? ¿No\n\
ves  que estoy\n\
pasándomelo bien causando\n\
caos con mis tropas?\n\
Ya que estás aquí,\n\
¡devuelve las Estrellas!\n\
¡Mi ejército en las\n\
paredes las necesitan!\n\
¡Ja ja ja ja!"))

DEFINE_DIALOG(DIALOG_093, 1, 5, 30, 200, _("\
¡Mario! ¡Otra vez tú!\n\
Llegas justo a tiempo--\n\
¡Estaba buscando algo que\n\
quemar con mi aliento de\n\
fuego!\n\
¡El poder de las Estrellas\n\
es inútil contra mí!\n\
¡Todos tus amigos están\n\
atrapados en las paredes!\n\
\n\
¡Y jamás volverás a ver\n\
a la princesa!\n\
¡Ja ja ja ja ja!"))

DEFINE_DIALOG(DIALOG_094, 1, 4, 30, 200, _("\
¡Coge carrerilla en la\n\
cuesta! ¿Te acuerdas del\n\
salto largo? Corre, pulsa\n\
[Z], y luego salta!"))

DEFINE_DIALOG(DIALOG_095, 1, 5, 30, 200, _("\
Para leer un cartel,\n\
ponte en frente y...\n\
pulsa [B]... pero...\n\
acabas de hacerlo,\n\
así que eso ya lo sabes.\n\
Para hablar con un Koopa\n\
u otro animal, solo\n\
tienes que ponerte\n\
enfrente de él.\n\
Por favor, recupera las\n\
estrellas que Bowser robó\n\
y escondió en este mundo."))

DEFINE_DIALOG(DIALOG_096, 1, 5, 30, 200, _("\
Este camino es muy\n\
estrecho. ¡Tienes que ir\n\
con cuidado! Además, no\n\
se permiten visitas a la\n\
cima de la montaña.\n\
Por tu propio bien,\n\
¡no despiertes a nadie!\n\
a nadie! Vamos, que\n\
camines despacio."))

DEFINE_DIALOG(DIALOG_097, 1, 6, 30, 200, _("\
¡No dejes que te hagan\n\
bullying! Si alguien te\n\
empuja, ¡empújale de\n\
vuelta! Es uno uno contra\n\
uno, ¡y el perderdor\n\
arderá!"))

DEFINE_DIALOG(DIALOG_098, 1, 2, 95, 200, _("\
Ven aquí...\n\
...je, je, je..."))

DEFINE_DIALOG(DIALOG_099, 1, 5, 95, 200, _("\
Je je je...\n\
Ahora mando yo, je je je\n\
Voy a atravesar esta\n\
pared. ¿Puedes hacer lo\n\
mismo? ¡Je je je!"))

DEFINE_DIALOG(DIALOG_100, 1, 3, 95, 200, _("\
Ukkiki...Wakkiki...¡ki ki!\n\
¡Ja! ¡Para mí!\n\
¡Es mía! ¡Je je je je!"))

DEFINE_DIALOG(DIALOG_101, 1, 3, 95, 200, _("\
¡Ay! Sue...suéltame...\n\
Me estás... ahorcando...\n\
Eh...¡me han incriminado!\n\
¿Esta gorra? Ay, vale,\n\
toma. Es bonita, pero te\n\
la devuelvo.\n\
¡Pero creo que me queda\n\
mejor a mí que a ti!\n\
¡Je je je!"))

DEFINE_DIALOG(DIALOG_102, 1, 6, 30, 200, _("\
¡Oye! Los Boo son muy\n\
tímidos. Si les miras a\n\
la cara, desaparecen,\n\
pero si les das la\n\
espalda, vuelven a\n\
aparecer.\n\
No sirve de nada\n\
golpearles cuando han\n\
desaparecido. Intenta\n\
golpearles por la espalda."))

DEFINE_DIALOG(DIALOG_103, 1, 4, 95, 200, _("\
Las cuatro torres\n\
debes dominar...\n\
Entonces en la cima\n\
la luz hallarás..."))

DEFINE_DIALOG(DIALOG_104, 1, 6, 30, 200, _("\
Esa estrella oscura que\n\
tienes enfrente es un\n\
『Marcador de Estrella.』\n\
Cuando consigas 8 monedas\n\
rojas, una Estrella\n\
aparecerá aquí."))

DEFINE_DIALOG(DIALOG_105, 1, 4, 95, 200, _("\
¡Listos para disparar!\n\
¡Venga, sube al cañón!\n\
\n\
\n\
Puedes llegar a la\n\
Estrella de la isla\n\
flotante usando los\n\
cañones.\n\
Usa el stick de control\n\
para apuntar, y luego\n\
pulsa [A] para disparar.\n\
\n\
Si tienes buena puntería,\n\
puedes darle a un árbol\n\
o un tubo, y agarrarte."))

DEFINE_DIALOG(DIALOG_106, 1, 2, 95, 200, _("\
¡Listos para disparar!\n\
¡Venga, sube al cañón!"))

DEFINE_DIALOG(DIALOG_107, 1, 3, 95, 200, _("\
Los fantasmas...\n\
...no...\n\
...¡MUEREN!\n\
¡Je, je je!\n\
¿Podrás salir de aquí...\n\
...con vida?"))

DEFINE_DIALOG(DIALOG_108, 1, 2, 95, 200, _("\
¡Bu! ¡Aquí llega el\n\
maestro del caos el jefe,\n\
del terror, el Gran Boo!,\n\
Ja ja ja ja..."))

DEFINE_DIALOG(DIALOG_109, 1, 4, 95, 200, _("\
¡Oooh, no! ¡He llevado\n\
los viajes astrales al\n\
extremo! ¡Mi cuerpo se ha\n\
derretido!\n\
No sabrás de algún cuerpo\n\
que esté buscando una\n\
cabeza, ¿verdad? ¡Porque\n\
me vendría muy bien!\n\
¡Brrr! ¡Se me va a\n\
congelar la cabeza si\n\
sigo así!"))

DEFINE_DIALOG(DIALOG_110, 1, 6, 95, 200, _("\
Necesito encontrar una\n\
buena cabeza para mis\n\
hombros. ¿Sabes de alguna\n\
que esté en búsqueda de\n\
un buen cuerpo? Si es\n\
así, ¡te sigo!"))

DEFINE_DIALOG(DIALOG_111, 1, 4, 95, 200, _("\
¡Genial! ¡Qué cuerpo tan\n\
fantástico! Toma, tu\n\
recompensa. Seguro que te\n\
ayuda a entrar en calor."))

DEFINE_DIALOG(DIALOG_112, 1, 5, 30, 200, _("\
¡Consigue tantas monedas\n\
como puedas! Te ayudarán\n\
a recuperar tu barra de\n\
vida.\n\
\n\
En el menú de pausa\n\
puedes comprobar cuantas\n\
monedas has recogido en\n\
cada uno de los 15\n\
mundos enemigos\n\
También puedes recuperar\n\
vida tocando un corazón\n\
giratorio.\n\
\n\
\n\
Cuanto más rápido te\n\
estés moviendo al tocar\n\
el corazón giratorio,\n\
más vida\n\
recuperarás."))

DEFINE_DIALOG(DIALOG_113, 1, 6, 30, 200, _("\
Hay gorras especiales\n\
ocultas en los bloques\n\
rojos, verdes y azules.\n\
Pisa los botones en los\n\
niveles secretos para\n\
activarlos."))

DEFINE_DIALOG(DIALOG_114, 1, 7, 95, 200, _("\
¡Me toca muchísimo las\n\
narices! Construimos\n\
vuestras casas, vuestros\n\
castillos, vuestras\n\
carreteras, ¡y aún así\n\
nos pisoteáis!\n\
\n\
¿Alguna vez decís\n\
gracias? ¡No! ¡Pues tú\n\
no vas a limpiarte los\n\
zapatos en mi espalda!\n\
¡Creo que voy a\n\
aplastarte, solo por\n\
diversión!\n\
¿Qué? ¿Te parece mal?\n\
¡Intenta impedirlo,\n\
canijo!"))

DEFINE_DIALOG(DIALOG_115, 1, 5, 95, 200, _("\
¡No! ¡Pisoteado otra vez!\n\
Supongo que no soy más que\n\
asfalto, hecho para ser\n\
pisado. Acepto mi derrota.\n\
¡Llévate esto!"))

DEFINE_DIALOG(DIALOG_116, 1, 6, 95, 200, _("\
¿Qu...quéeeee? ¿De verdad\n\
un canijo sin chispa como\n\
tú ha desactivado al Gran\n\
Bob-omb?\n\
\n\
\n\
Puede que hayas sido\n\
suficientemente ágil como\n\
para derrotarme a mí,\n\
pero no sabes lo que te\n\
espera cuando te\n\
enfrentes a Bowser.\n\
¡Vas a tener que\n\
espabilarte si pretendes\n\
tener la más mínima\n\
posibilidad de cogerle\n\
por la cola! Aún así, lo\n\
has hecho bien.\n\
¡Incluso diría que mis\n\
tropas podrían aprender\n\
un par de cosas de ti!\n\
Tal y como te prometí,\n\
puedes quedarte con la\n\
Estrella, Mario.\n\
Si quieres volverme a\n\
ver, vuelve a seleccionar\n\
esta Estrella desde el\n\
menú. Pero de momento,\n\
he de despedirme."))

DEFINE_DIALOG(DIALOG_117, 1, 1, 95, 200, _("\
¿Quién...pisar...aquí?\n\
¿Quién...romper...sello?\n\
¿Despertar...ancestros..?\n\
No gustarnos la luz...\n\
Urrrgh...\n\
No gustarnos...¡intrusos!\n\
Ahora, luchar...\n\
...¡mano...\n\
...a..\n\
...mano!"))

DEFINE_DIALOG(DIALOG_118, 1, 6, 95, 200, _("\
¡Urrrghh!\n\
¿Qué... ocurrir?\n\
Nosotros... aplastados...\n\
¡Tú tan fuerte!\n\
¡Tú dominar pirámide!\n\
Por hoy...\n\
Ahora, toma la Estrella\n\
Poderosa.\n\
Nosotros... dormir...\n\
...oscuridad..."))

DEFINE_DIALOG(DIALOG_119, 1, 6, 30, 200, _("\
¡Argh! Tal vez te he\n\
subestimado. Esto no era\n\
lo que había planeado.\n\
¡Pero sigo teniendo el\n\
poder de las Estrellas,\n\
y a Peach!\n\
¡Ja ja ja! ¡No vas a\n\
quitarme más estrellas!\n\
Todavía no he acabado\n\
contigo, pero te dejaré ir\n\
por ahora. ¡Pero me las\n\
pagarás, créeme!"))

DEFINE_DIALOG(DIALOG_120, 1, 4, 30, 200, _("\
¡Ahhh! ¿de verdad he\n\
vuelto a perder? El poder\n\
de las Estrellas me ha\n\
fallado... esta vez.\n\
Considera esto un empate.\n\
La próxima vez, estaré\n\
en perfectas condiciones.\n\
\n\
Ahora, si quieres ver\n\
a tu preciada princesa,\n\
ven a verme a lo más\n\
alto de la torre.\n\
¡Te estaré esperando,\n\
Mario!\n\
¡Ja ja ja ja!"))

DEFINE_DIALOG(DIALOG_121, 1, 6, 30, 200, _("\
¡Nooo! ¡No puede ser!\n\
¿¡De verdad me has\n\
ganado, Mario!? ¡Le di\n\
poder a mis tropas, pero\n\
ahora ese poder está\n\
desapareciendo!\n\
¡Puedo ver la paz\n\
volviendo al mundo! ¡No lo\n\
aguanto! Pero esto aún\n\
no se ha acabado...\n\
\n\
\n\
¡Vamos, tropas! ¡Veamos el\n\
final juntos!\n\
¡Ja ja ja!"))

DEFINE_DIALOG(DIALOG_122, 1, 5, 30, 200, _("\
El Agujero Negro\n\
Derecha: Ascensor\n\
/// Laberinto venenoso\n\
Izquierda: Lago\n\
subterráneo"))

DEFINE_DIALOG(DIALOG_123, 1, 5, 30, 200, _("\
Caverna de Metal\n\
Derecha: Cascada\n\
Izquierda: Botón de la\n\
gorra de metal."))

DEFINE_DIALOG(DIALOG_124, 1, 4, 30, 200, _("\
Ascensor de trabajo\n\
¡¡Peligro!!\n\
¡Leer instrucciones\n\
detenidamente!\n\
El ascensor continúa en\n\
la dirección de la flecha\n\
que se haya activado."))

DEFINE_DIALOG(DIALOG_125, 1, 3, 30, 200, _("\
Salida del laberinto\n\
venenoso. ¡Peligro!\n\
Cerrado. No pasar."))

DEFINE_DIALOG(DIALOG_126, 2, 3, 30, 200, _("\
Arriba: Agujero negro\n\
Derecha: Ascensor\n\
/// Laberinto venenoso"))

DEFINE_DIALOG(DIALOG_127, 3, 5, 30, 200, _("\
Lago subterráneo\n\
Derecha:Caverna de metal\n\
Izquierda:Mina abandonada\n\
///(Cerrado)\n\
\n\
Un amable dragón de agua\n\
vive aquí. Pisa su cabeza\n\
con fuerza para que baje\n\
la cabeza. Ciudado, no te\n\
conviertas en su almuerzo."))

DEFINE_DIALOG(DIALOG_128, 1, 4, 95, 200, _("\
¡Debes luchar con honor!\n\
Lanzar al adversario\n\
fuera del campo de batalla\n\
está prohibido!"))

DEFINE_DIALOG(DIALOG_129, 1, 6, 30, 200, _("\
¡Bienvenido al mundo de la\n\
Gorra de Invisibilidad!\n\
Todos los bloques azules\n\
que has visto se volverán\n\
sólidos cuando pises el\n\
botón azul.\n\
Desaparecerás cuando te\n\
pongas la Gorra de\n\
Invisibilidad, así que\n\
podrás atravesar a los\n\
enemigos y otras cosas.\n\
¡Pruébalo!"))

DEFINE_DIALOG(DIALOG_130, 1, 6, 30, 200, _("\
¡Bienvenido al mundo de\n\
la Gorra de Metal! Cuando\n\
pises el botón botón\n\
verde, todos los bloques\n\
verdes que has visto se\n\
volverán sólidos.\n\
Cuando tu cuerpo se\n\
convierte en metal gracias\n\
al poder de esta gorra,\n\
¡puedes caminar bajo el\n\
agua! ¡Pruébalo!"))

DEFINE_DIALOG(DIALOG_131, 1, 5, 30, 200, _("\
¡Bienvenido al mundo de\n\
la Gorra Voladora! Pisa el\n\
botón rojo en lo alto de\n\
la torre, al centro del\n\
anillo arcoíris.\n\
Cuando pulses el botón,\n\
todos los bloques rojos\n\
que has visto se volverán\n\
sólidos.\n\
\n\
¡Prueba la Gorra Voladora!\n\
Para despegar, haz un\n\
triple salto, y cuando\n\
quieras aterrizar, pulsa\n\
[Z]\n\
Mueve el stick de control\n\
hacia detrás para\n\
elevarte, y hacia detrás\n\
para descender, como si\n\
controlases un avión."))

DEFINE_DIALOG(DIALOG_132, 1, 4, 30, 200, _("\
Guau, Mario, ¿de verdad\n\
estabas intentando hacer\n\
trampas? No se permiten\n\
los atajos.\n\
Sé que lo sabes de sobra.\n\
Estás descalificado.\n\
Para la próxima, juega\n\
limpio."))

DEFINE_DIALOG(DIALOG_133, 1, 7, 30, 200, _("\
¡No tienes idea de lo\n\
mucho que me alegra\n\
verte!\n\
La princesa, yo, y\n\
todo el mundo...estamos\n\
atrapados dentro de las\n\
paredes del castillo.\n\
Bowser ha robado las\n\
Estrellas del castillo, y\n\
está usando su poder para\n\
crear su propio mundo\n\
dentro de los cuadros y\n\
las paredes.\n\
\n\
¡Por favor, recupera las\n\
Estrellas de Poder!\n\
Cuando las encuentres,\n\
podrás usar su poder para\n\
abrir las puertas que\n\
Bowser ha sellado.\n\
\n\
Hay cuatro salas en el\n\
primer piso. Empieza por\n\
la que tiene un cuadro de\n\
unos Bob-omb. Es la única\n\
sala que Bowser no ha\n\
sellado.\n\
\n\
Cuando consigas ocho\n\
Estrellas, podrás abrir\n\
la puerta con la estrella\n\
grande. ¡Seguro que la\n\
princesa está ahí!"))

DEFINE_DIALOG(DIALOG_134, 1, 6, 30, 200, _("\
Los nombres de las\n\
Estrellas son pistas de\n\
cómo encontrarlas. Puedes\n\
verlas al entrar a cada\n\
mundo.\n\
\n\
Puedes cogerlas en\n\
cualquier orden, pero\n\
hay ciertas Estrellas y\n\
ciertos enemigos que solo\n\
aparecerán si escoges\n\
una Estrella concreta."))

DEFINE_DIALOG(DIALOG_135, 1, 6, 30, 200, _("\
Fue Bowser quien robó las\n\
Estrellas. ¡Le vi con\n\
mis propios ojos!\n\
\n\
\n\
\n\
Ha escondido seis\n\
Estrellas en cada mundo,\n\
pero para coger algunas\n\
de ellas, necesitarás\n\
activar los botones\n\
de las gorras.\n\
Puedes comprobar qué\n\
Estrellas has conseguido\n\
al entrar a cada mundo.\n\
\n\
\n\
\n\
Si quieres volver a ver\n\
a un enemigo que  ya has\n\
derrotado, vuelve a\n\
seleccionar su Estrella\n\
al entrar al mundo\n\
correspondiente."))

DEFINE_DIALOG(DIALOG_136, 1, 6, 30, 200, _("\
¡Guau! ¿Ya has conseguido\n\
todas esas estrellas?\n\
¡Muy bien, Mario! ¡Seguro\n\
que nos sacas de aquí en\n\
nada!\n\
\n\
Pero ten cuidado: Bowser\n\
y sus secuaces son unos\n\
expertos del 『mal.』\n\
Te voy a dar un consejo:\n\
\n\
\n\
Cuando necesites curarte\n\
de tus heridas, coge\n\
monedas. Las monedas\n\
amarillas recuperan un\n\
trozo del medidor de vida.\n\
Las rojas, dos.\n\
Y por último, las azules\n\
recuperan nada más y nada\n\
menos que cinco.\n\
Te preguntarás dónde\n\
encontrar esas preciadas\n\
monedas azules, ¿eh?\n\
Busca los bloques de\n\
monedas azules. Los\n\
reconocerás. Si le das un\n\
pisotón a uno, aparecerán\n\
monedas azules, pero\n\
debes cogerlas rápido.\n\
Por cierto, cuando caigas\n\
de mucha altura, puedes\n\
dar un pisotón justo\n\
antes de tocar el suelo,\n\
y recibir menos daño de\n\
lo normal por el golpe."))

DEFINE_DIALOG(DIALOG_137, 1, 6, 30, 200, _("\
¡Gracias, Mario! La\n\
energía del castillo se\n\
restaura poco a poco\n\
según consigues Estrellas\n\
de Poder, y has hecho\n\
huir a Bowser.\n\
Pero seguro que te está\n\
esperando más adelante.\n\
Por cierto... espero que\n\
estés cogiendo todas las\n\
monedas que puedas, ¿eh?\n\
\n\
No te lo vas a creer:\n\
todos los mundos tienen\n\
una estrella oculta que\n\
solo aparece si consigues\n\
100 monedas en ese mundo.\n\
¡Intenta conseguirlas!"))

DEFINE_DIALOG(DIALOG_138, 1, 4, 30, 200, _("\
Abajo: Lago subterráneo\n\
Izquierda: Agujero negro\n\
Derecha: Laberinto venenoso\n\
(Cerrado)"))

DEFINE_DIALOG(DIALOG_139, 1, 6, 30, 200, _("\
Arriba: Auto-ascensor.\n\
El ascensor se mueve\n\
automáticamente siguiendo\n\
una ruta predefinida.\n\
Cuando termina, desaparece\n\
autómáticamente.\n\
¡No te caigas!"))

DEFINE_DIALOG(DIALOG_140, 1, 6, 30, 200, _("\
Zona del ascensor\n\
Derecha:Laberinto venenoso\n\
/// Entrada\n\
Izquierda: Agujero negro\n\
///Ascensor 1\n\
Flecha: Tu posición"))

DEFINE_DIALOG(DIALOG_141, 1, 6, 150, 200, _("\
¡Has conseguido una de\n\
las Estrellas de Poder\n\
robadas! Ahora puedes\n\
abrir más puertas del\n\
castillo.\n\
\n\
Prueba a ir a la\n\
habitación de la princesa\n\
en el segundo piso o\n\
a la sala con el cuadro\n\
de la Fortaleza Roco\n\
en el primer piso.\n\
Las tropas de Bowser no\n\
paran de crecer y ganar\n\
poder, así que no bajes\n\
la guardia, Mario. ¡Sigue\n\
buscando Estrellas!"))

DEFINE_DIALOG(DIALOG_142, 1, 6, 150, 200, _("\
¡Has recuperado tres\n\
Estrellas de Poder! Ahora\n\
puedes abrir cualquier\n\
puerta que tenga un 3\n\
en la estrella.\n\
\n\
Puedes entrar y salir\n\
de los mundos disponibles\n\
cuantas veces quieras.\n\
¡Te esperan\n\
enemigos cada vez más\n\
poderosos, así que ten\n\
cuidado!"))

DEFINE_DIALOG(DIALOG_143, 1, 7, 150, 200, _("\
¡Has recuperado ocho\n\
Estrellas de Poder!\n\
¡Ahora puedes abrir la\n\
puerta con la Estrella\n\
gigante! Pero Bowser\n\
está cerca... ¿oyes\n\
a la princesa llamándote?"))

DEFINE_DIALOG(DIALOG_144, 1, 6, 150, 200, _("\
¡Has recuperado 30\n\
Estrellas de Poder! Ahora\n\
puedes abrir la puerta\n\
con la Estrella grande.\n\
Pero antes de eso: ¿qué\n\
tal te está yendo?\n\
¿Has pisoteado las dos\n\
columnas? Y... no habrás\n\
perdido tu gorra, ¿no?\n\
Si la has perdido, es muy\n\
posible que la tenga ese\n\
desgraciado cuervo...\n\
Se comenta que Bowser ha\n\
huido de su refugio\n\
marítimo y está bajo\n\
tierra. ¿Lo has\n\
acorralado por fin?"))

DEFINE_DIALOG(DIALOG_145, 1, 6, 150, 200, _("\
¡Has recuperado 50\n\
Estrellas de Poder! Ahora\n\
puedes abrir la puerta de\n\
la Estrella grande del\n\
tercer piso. Bowser está\n\
ahí, como ya sabes.\n\
¡Ah! Imagino que ya has\n\
activado los botones\n\
de las gorras, ¿no? ¿El\n\
rojo, el azul y el verde?\n\
Las gorras a las que te\n\
dan acceso ayudan mucho.\n\
Bueno, date prisa. El\n\
tercer piso está ahí\n\
delante."))

DEFINE_DIALOG(DIALOG_146, 1, 6, 150, 200, _("\
¡Has encontrado 70\n\
Estrellas de Poder! Ahora\n\
esas escaleras infinitas\n\
de las que tanto presume\n\
Bowser no son más que\n\
unas escaleras normales.\n\
¡Seguro que no está\n\
muy contento! Y lo que le\n\
espera: ¡Te toca ir a\n\
darle una lección!"))

DEFINE_DIALOG(DIALOG_147, 1, 5, 30, 200, _("\
¿Estás usando los bloques\n\
de las gorras? Porque\n\
deberías, ¿sabes?\n\
\n\
\n\
Para volverlos sólidos y\n\
poder romperlos, tendrás\n\
que activar sus\n\
correspondientes botones\n\
de colores.\n\
Están ocultos en zonas\n\
secretas del castillo.\n\
Necesitarás encontrar\n\
algunas estrellas antes.\n\
\n\
Los bloques rojos te dan\n\
la gorra voladora, los\n\
verdes la gorra de metal,\n\
y los azules la gorra\n\
de invisibilidad."))

DEFINE_DIALOG(DIALOG_148, 1, 6, 30, 200, _("\
La Montaña del Muñeco de\n\
Nieve está justo delante.\n\
¡No pasar! Y ni se te\n\
ocurra hacer un triple\n\
salto por encima del\n\
dispensador de hielo.\n\
Si te caes en el lago\n\
congelado, tu vida bajará\n\
muy rápidamente, y no\n\
la recuperarás en la\n\
superficie.\n\
//--El Muñeco de Nieve"))

DEFINE_DIALOG(DIALOG_149, 1, 4, 30, 200, _("\
¡Bienvenido al tobogán\n\
secreto de la Princesa\n\
Peach!\n\
\n\
Hay una Estrella oculta\n\
aquí que Bowser no pudo\n\
encontrar.\n\
\n\
Cuando te deslices, mueve\n\
el stick hacia delante\n\
para acelerar, y atrás\n\
para frenar.\n\
Si llegas a la meta muy\n\
rápido, ¡conseguirás la\n\
estrella oculta!"))

DEFINE_DIALOG(DIALOG_150, 1, 5, 30, 200, _("\
¡Buaaa! ¡Has inundado mi\n\
casa! ¿Por qué harías\n\
algo así? ¡Mira este\n\
desastre! ¿Qué voy a\n\
hacer ahora?\n\
El techo está arruinado,\n\
el suelo está empapado...\n\
¿qué puedo hacer? Uff...\n\
Me... enfada... ¡MUCHO!\n\
\n\
¡Desde que encontré esta\n\
estúpida estrella, todo\n\
me ha empezado a salir\n\
mal! Brilla mucho... pero\n\
me hace sentir raro."))

DEFINE_DIALOG(DIALOG_151, 1, 3, 30, 200, _("\
¡No puedo más! Primero\n\
inundas todo, ¡y ahora\n\
vas y me pisas!\n\
¡Ahora sí que estoy bien\n\
cabreado!\n\
¡Aaaahhhhh!"))

DEFINE_DIALOG(DIALOG_152, 1, 3, 30, 200, _("\
¡Ay! ¡Tío! ¡Tío! ¡Para!\n\
¡Me rindo! ¡Quédate esta\n\
estrella!\n\
...guau, de repente me\n\
siento mejor. Igualmente\n\
no la necesitaba.\n\
Me gusta mucho ver las\n\
estrellas por la noche.\n\
Me hacen sentir en paz.\n\
Por favor, ¡ven a verme\n\
cuando quieras!"))

DEFINE_DIALOG(DIALOG_153, 1, 4, 30, 200, _("\
¡Hey! ¿Quién anda ahí?\n\
¿Qué es esta cosa que\n\
tengo encima? ¿Se\n\
me ha subido un bicho?\n\
¡Sea lo que sea, me\n\
molesta! ¡Voy a quitármelo\n\
soplando!"))

DEFINE_DIALOG(DIALOG_154, 1, 5, 30, 200, _("\
¡No pierdas tu gorra! Si\n\
la pierdes, te harán daño\n\
más fácilmente. Si eso\n\
ocurre, búscala en el\n\
mundo donde la perdiste.\n\
Hablando de perder, la\n\
Princesa sigue\n\
desaparecida, atrapada en\n\
alguna de las paredes.\n\
¡Ayúdala, Mario!\n\
Por cierto, sabes que\n\
algunos mundos están\n\
escondidos directamente\n\
en las paredes en lugar\n\
de un cuadro, ¿verdad?"))

DEFINE_DIALOG(DIALOG_155, 1, 6, 30, 200, _("\
Gracias al poder de las\n\
Estrellas, el castillo\n\
empieza a volver a la\n\
vida. Por favor, Mario,\n\
¡dale una lección a\n\
Bowser!\n\
Mira, deja que te cuente\n\
un secreto del castillo.\n\
En la habitación con el\n\
espejo, estate atento\n\
a ver si ves algo que\n\
solo existe en el espejo.\n\
Y cuando vayas a la\n\
Ciudad Mojaseca, puedes\n\
inundarla al entrar si \n\
entras por la parte\n\
superior del cuadro."))

DEFINE_DIALOG(DIALOG_156, 1, 5, 30, 200, _("\
Ese reloj tiene algo\n\
extraño. Intenta fijarte\n\
en la posición que tienen\n\
las manillas cuando\n\
entras."))

DEFINE_DIALOG(DIALOG_157, 1, 5, 30, 200, _("\
¡Cuidado! ¡No te hundas\n\
en las arenas movedizas!\n\
\n\
\n\
\n\
Si te hundes en la arena,\n\
no podrás saltar, y si tu\n\
cabeza se hunde, tendrás\n\
que aprender a convivir\n\
con los escorpiones.\n\
Las zonas oscuras son\n\
pozos sin fondo."))

DEFINE_DIALOG(DIALOG_158, 1, 6, 30, 200, _("\
1. Si saltas repetidamente\n\
y con el ritmo adecuado,\n\
saltarás cada vez más\n\
alto. Si lo haces al\n\
correr tres veces, harás\n\
un triple salto.\n\
2. Salta hacia una pared,\n\
y cuando la toques vuelve\n\
a saltar. De esta manera\n\
podrás rebotar y llegar\n\
más alto"))

DEFINE_DIALOG(DIALOG_159, 1, 6, 30, 200, _("\
3. Para hacer una pirueta\n\
hacia atrás, párate,\n\
pulsa [Z], y luego [A]\n\
Para hacer un salto\n\
largo, pulsa [Z] y [A]\n\
mientras corres."))

DEFINE_DIALOG(DIALOG_160, 1, 5, 30, 200, _("\
Pulsa [B] mientras corres\n\
rápido para lanzarte hacia\n\
delante. Para saltar y\n\
ponerte de pie, pulsa [A]\n\
o [B]."))

DEFINE_DIALOG(DIALOG_161, 1, 5, 30, 200, _("\
¡¡¡Mario!!!\n\
¿De verdad eres tú?\n\
¡Ha pasado tanto tiempo\n\
desde nuestra última\n\
aventura!\n\
¡Me habían dicho que\n\
podría verte si te\n\
esperaba aquí, pero\n\
estaba a punto de\n\
rendirme!\n\
¿Es cierto lo que dicen?\n\
¿De verdad has vencido a\n\
Bowser? ¿Y has devuelto\n\
las Estrellas al?\n\
castillo?\n\
¡Sabía que podrías\n\
hacerlo! Ahora tengo un\n\
mensaje muy especial para\n\
ti.\n\
『¡Gracias por jugar a\n\
Super Mario 64! Este es\n\
el final del juego, pero\n\
no el final de la\n\
diversión.\n\
Queremos que sigas\n\
jugando, así que tenemos\n\
un regalito para ti.\n\
¡Disfrútalo!\n\
\n\
Firmado: El equipo de\n\
Super Mario 64.』"))

DEFINE_DIALOG(DIALOG_162, 1, 4, 30, 200, _("\
¡No, otra vez tú no!\n\
¡Te he dicho que llego\n\
tarde! ¿Es que no te\n\
importa?\n\
Mira, no tengo tiempo de\n\
estar peleando por unas\n\
Estrellas. ¡No la estaba\n\
intentando esconder!\n\
Lo que pasa es que llevo\n\
mucha prisa. Eso es todo.\n\
Toma, quédatela, ¡Pero\n\
déjame irme ya!"))

DEFINE_DIALOG(DIALOG_163, 1, 5, 30, 200, _("\
¡Nooo! ¡Ahora sí que me\n\
has vencido, Mario! ¡Y\n\
no puedo soportar perder\n\
ante ti!\n\
\n\
Mis tropas... ¡son\n\
inútiles! ¡Han perdido\n\
todas las estrellas de\n\
Poder! ¿Cómo dices?\n\
¿¿¿Que hay 120???\n\
¡Increíble! ¿Hay algunas\n\
que no encontré? ¡No puede\n\
ser! ¡Pensaba que las\n\
tenía todas!\n\
\n\
Puedo ver la paz\n\
volviendo al mundo... ¡no\n\
lo soporto! ¡No puedo\n\
mirar! ¡Me largo!\n\
\n\
Prepárate para la\n\
próxima.\n\
Hasta entonces, ¡haz que\n\
ese stick de control\n\
eche humo! ¡Ja ja ja!"))

DEFINE_DIALOG(DIALOG_164, 1, 4, 30, 200, _("\
¡Hola, Mario! ¿Qué tal?\n\
No he estado corriendo\n\
últimamente, así que no\n\
estoy muy en forma.\n\
Pero aún así, no puedo.\n\
decir que no a una\n\
carrera, especialmente si\n\
es contra un amigo.\n\
¿Qué me dices?\n\
Preparados... listos...\n\
\n\
//¡Ya!//// ¡Luego!"))

DEFINE_DIALOG(DIALOG_165, 1, 6, 30, 200, _("\
Deniego cualquier\n\
responsabilidad si\n\
alguien se marea y se\n\
desmaya por correr \n\
alrededor de este\n\
cartel."))

DEFINE_DIALOG(DIALOG_166, 1, 4, 30, 200, _("\
Volveré pronto.\n\
Estoy entrenando,\n\
así que vuelve más tarde.\n\
//--Koopa el Rápido"))

DEFINE_DIALOG(DIALOG_167, 1, 4, 30, 200, _("\
áéíóúüñ\n\
ÁÉÍÓÚÜÑ\n\
¡¿"))

/*
DEFINE_DIALOG(DIALOG_167, 1, 4, 30, 200, _("\
El castillo de la princesa\n\
está justo delante.\n\
\n\
\n\
Pulsa [A] para saltar, [Z]\n\
para agacharte, y [B] para\n\
dar un puñetazo, leer un\n\
cartel, o coger algo.\n\
Vuelve a pulsar [B] para\n\
tirar algo que hayas\n\
cogido."))
*/

DEFINE_DIALOG(DIALOG_168, 1, 5, 30, 200, _("\
¡Hey! ¡Ya basta! ¡Es la\n\
segunda vez que haces eso!\n\
¡Ahora sí que te lo has\n\
buscado, pesado! ¡Te vas\n\
a enterar!"))

DEFINE_DIALOG(DIALOG_169, 1, 4, 30, 200, _("\
¡Prohibido el paso!\n\
¡Va por ti!!\n\
¡Arrgghh!\n\
\n\
A cualquiera que entre en\n\
esta cueva sin permiso\n\
le espera un destino\n\
terrible."))
