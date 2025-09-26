


# MCU Algorhitms
___

#### Набор кросс-платформенных библиотек различных алгоритмов, оптимизированных под малые ресурсы микроконтроллеров и других компьютерных систем.

#### A set of cross-platform libraries of various algorithms optimized for small resources of microcontrollers and other computer systems.

___

<img src="/resources/logo.png" alt="Algorithm logo"/>

___

#### Среди них:

- Алгоритмы работы с числовыми данными и преобразования чисел различных типов

   - [Функции преобразования целых чисел в ASCII строки](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/itoa)

   - [Функции преобразования ASCII строки в целые числа](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/atoi)

   - [Функции преобразования чисел с плавающей точкой в ASCII строки](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/ftoa)

   - [Функции преобразования ASCII строки в числа с плавающей точкой](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/atof)

   - [Функции преобразования целых чисел в ASCII строку двоичного представления](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/itobina)

   - [Функции преобразования целых чисел в ASCII строку шестнадцетиричного представления](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/itohexa)

   - [Функции преобразования целых чисел в двоично-десятичное представление и обратно](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/bcd)

   - [Функции преобразования чисел в код Грея и обратно](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/grayscode)

   - [Функции работы с числами с фиксированной точкой](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/fixpoint)

   - [Функции математического преобразования чисел (расширяющие стандартную библиотеку math.h)](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/mathx)

   - [Функции конвертирования различных физических величин](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Data%20Conversion/valconvert)


- Алгоритмы генераторов псевдослучайных чисел (ГПСЧ)

   - [Функции для облегчения работы со стандартной функцией rand()](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/PRNG%20Algorithms/random)

   - [Облегчённый ГПСЧ на основе линейного конгруэнтного метода](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/PRNG%20Algorithms/fast%20random)

   - [Библиотека генератора псевдослучайных чисел на основе изменяемого массива (MAPRNG - Mutable Array Pseudo-Random Number Generator)](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/PRNG%20Algorithms/MAPRNG)


- Криптографические алгоритмы:

   - [Алгоритмы семейства TEA (TEA, XTEA, XTEA1, XTEA2, XTEA3, Raiden)](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Cryptography/TEA%20Series)

   - [Стандартный и модифицированный алгоритм Виженера](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Cryptography/Vigenere)


- Алгоритмы цифровой фильтрации данных ([ссылка](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/Digital%20Filters))


- Алгоритмы преобразования цветового пространства RGB в HSV и обратно (для LED источников)](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/LED%20Colors%20Transform))


- Алгоритмы CRT коррекции цвета, излучаемый светодиодными источниками ([ссылка](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/LED%20Gamma%20Correction))


- Алгоритмы вычисления контрольной суммы (CRC) ([ссылка](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/CRC%20Calculation))


- Реализация алгоритма расчета температуры с помощью NTC терморезистора ([ссылка](https://github.com/dippinest/MCU-Algorithms/tree/main/Libraries/NTC%20Thermometer))


- ...и другие.



##### В качестве примеров алгоритмов приведены реализации тестовых программ для микроконтроллеров семейства AVR (компилятор avr-gcc).

___

#### Among them:

- Algorithms for working with numeric data and converting numbers of various types

   - Functions for converting integers to strings

   - Functions for converting strings to integers

   - Functions for converting floating-point numbers to strings

   - Functions for converting strings to floating-point numbers

   - Functions for converting integers to a string of binary representation

   - Functions for converting integers to a string of hexadecimal representation

   - Functions for converting integers to binary-decimal representation and vice versa

   - Functions for converting numbers to Gray's code and vice versa

   - Functions for working with fixed-point numbers

   - Mathematical number conversion functions (extending the standard math.h library)

   - Functions for converting various physical quantities


- Algorithms of pseudorandom number generators (RNG)

   - Functions to make it easier to work with the standard rand() function

   - A lightweight RNG based on the linear congruent method

   - A library for a pseudo-random number generator based on a mutable array (MAPRNG - Mutable Array Pseudo-Random Number Generator)


- Cryptographic algorithms:

   - TEA family algorithms (TEA, XTEA, XTEA1, XTEA2, XTEA3, Raiden)

   - Standard and modified Vigener algorithm


- Digital data filtering algorithms


- Algorithms for converting RGB color space to HSV and vice versa


- CRT algorithms for correcting the color emitted by LED sources


- Checksum calculation algorithms (CRC)


- Implementation of the temperature calculation algorithm using an NTC thermistor


"...and others.



##### The implementation of test programs for AVR family microcontrollers (avr-gcc compiler) is given as examples of algorithms.











