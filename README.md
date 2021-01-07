# Efektyvumo tyrimas
 Atliekama programos veikimo spartos analizė, veikimo greičio palyginimas po pakeitimų.
## Lyginama sąrašas(list) ir klasė,  paleidžiant su debug.
### <p align="center"> Failas su 100000 įrašų <p>
|              |duomenų nuskaitymas| rusiavimas su sort f| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|
|Sąrašas| 3.31222|35.5417 |0.754205 |1.26376 |
|Klasė| 2.4382|0.11805 |0.45458 |0.31487 |

### <p align="center"> Failas su 1000000 įrašų
|              |duomenų nuskaitymas| rusiavimas su sort f| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2|
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|
|Sąrašas|31.0988 |428.759 | 7.41152|13.5668 |
|Klasė| 25.6775| 1.57708|4.84897 |3.36172 |

**Išvada:** pakeitimas iš sąrašo į klasę programos veikimo greičiui padarė įtaką, programa greičiau atliko veiksmus.

## Kompiliatoriaus optimizavimo lygiai, paleidžiant jau su release.
### <p align="center">Failas su 100000 įrašų
|              |duomenų nuskaitymas| rusiavimas su sort f| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2| failo dydis |
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|-------------|
|01|0.265085 | 0.0353979| 0.0496303| 0.0421788|33 KB |
|02|0.252906 | 0.0301097|0.0511163 | 0.040909|39 KB |

### <p align="center"> Failas su 1000000 įrašų
|              |duomenų nuskaitymas| Studentų sąrašo dalinimas| dalinimo i dvi grupes 1  | dalinimo i dvi grupes 2| failo dydis |
|--------------|-------------------|--------------------------|-----------------------------------|-----------------------------------|-------------|
|01|2.20557 |0.666925 |0.555915 |0.555104 | 33 KB|
|02|2.01413 | 0.661778| 0.554651| 0.561185| 39 KB|

*Apie tyrimą:*

*  *Tyrimas atliktas su 100000, 1000000 studentų duomenų failais;*
*  *Programa buvo lyginama su listais;*
*  *Sąrašo dalinimui naudojama greičiausia (1) strategija;*
*  *Testavimo sistemos parametrai: CPU – 2 GHz, RAM – 8,00 GB, SSD – 128 GB, HDD - 1 TB.*
