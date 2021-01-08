## v1.2 versija

*  *Klasėje realizuotas destruktorius, kopijavimo konstruktorius, kopijavimo priskyrimo operatorius ("Rule of three").*

# Programa paleidžiama su debug.
### <p align="center"> Failas su 100000 įrašų <p>
|              |duomenų nuskaitymas| rusiavimas su sort f| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|
|Operatorius| 2.3558|0.192967 |0.498966 |0.412205 |
|Klasė| 2.4382|0.11805 |0.45458 |0.31487 |

### <p align="center"> Failas su 1000000 įrašų
|              |duomenų nuskaitymas| rusiavimas su sort f| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2|
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|
|Operatorius|26.0559 |2.8981 | 5.34561|4.21792 |
|Klasė| 25.6775| 1.57708|4.84897 |3.36172 |

**Išvada:** pakeitimas reikšmingos įtakos programos veikimo greičiui nepadarė.
