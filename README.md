rate baud 115200 db

13. PB9 est relié à la masse pour faire le boot_flash et donc il faut une resistance de pull-down

14. Il permet de faire le filtrage du 3.3v pour créer le 3.3VA

*******1.3. sCHÉMA
3. Page 3 / tableau operating conditions (0.47uF typ)

5. Page 15 (100n/10u)

6. CS : Chip Select (0 pour activer l'horloge)
   nLDAC : Latch Dac Input (sert à déclencher la transmission)

7. MISO n'est pas utilisé car il existe pas sur le DAC MCP4801

10. Page 19 datasheet STLINK V3 MINI

*******1.4. Affectation des empreintes

3. 0805, 0603, 1206 : c'est la taille des boitiers

4. LQFT (Low Pofile Quad Pad) : pin sur les 4 cotes du package avec un espacemenet variable mais une hauteur de 1.4mm

SOIC (Small Outline Integrated Circuit) : pin spacing 1.27mm qui sortent des deux cotés du composant


SOT-223 (Small Outline Transistor) : souvent utlisé pour les transistors et les diodes et souvent
3 pins


--------------------------------------------------------------------------------------------------------
3.1. Activation des LL drivers

2. Les différences observées c'est qu'on est plus proche du matériel donc il fut connaitre son microC donc l'intérêt c'est donne des accès direct au reagistre et donc il consomme moins en mémoire Flash et en mémoire dynamique


3.2 LED simple
2. Le prescaler vaut 255.
On a une freq de 32MHz sur les Timer et on veut une résolution sur 8 bits (on compte donc jusqu'à 255)
On fait 32MHz / 255 = 125,5MHz 
Donc prescaler = 125,5MHz / freq (1MHz)= 125
Avec counter period pour le PWM = 255

3. 


