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
