# DaduDigital

![Screenshot 2023-12-03 080817](https://github.com/adioperwira/DaduDigital/assets/147690354/a751027a-70f6-4e26-9259-6219a7dcb641)

Dadu digital Dot Matrix adalah sebuah dadu yang mampu menampilkan mata dadu random dari 1 - 6 (mode 1 dadu) atau dari 1 - 12 (Mode 2 Dadu). Dadu Digital Dot Matrix ini menggunakan LED Dot Matrix MAX 7219 untuk menampilkan mata dadu dan sensor getar SW 420 sebagai sensor yang akan mentrigger pengocokan dadu.

# Fitur

Dadu Digital Dot Matrix ini memiliki fitur sebagai berikut :
1. Menampilkan mata dadu dari 1 - 6 ( mode 1 dadu )
2. Menampilkan mata dadu dari 1 - 12 ( Mode 2 dadu )
3. Pengocokan dadu di trigger dengan sensor getar SW 420

# Alat dan Bahan

![20231202_223104](https://github.com/adioperwira/DaduDigital/assets/147690354/1c6aa338-fd78-40b6-a29c-3e655dbe70cf)

Untuk mengerjakan project ini, dibutuhkan alat & bahan sebagai berikut :
1. Microcontroller ( Arduino Uno )
2. LED Dot Matrix MAX 7219
3. Sensor Getar SW 420
4. Baterai 18650 2 pcs beserta housingnya
5. Breadboard
6. Kabel Jumper
   
Untuk Sketch, menggunakan Library  <LedControl.h> , silahkan download terlebih dahulu di library Arduino IDE <br />
Silahkan cek : https://github.com/wayoda/LedControl

# Wiring Diagram

![Wiring](https://github.com/adioperwira/DaduDigital/assets/147690354/0a5c7543-6bd6-4805-ba50-fe5cbe49e4d8)

Wiring Diagram dengan ketentuan sebagai berikut :

1. Pin Digital Dot Matrix terhubung ke pin 12 Arduino
2. Pin CS Dot Matrix pada pin 10 Arduino
3. Pin CLK Dot Matrix pada pin 11 Arduino
4. Pin digital sensor getar SW 420 ke pin 9 Arduino

# Petunjuk Penggunaan

Dadu Digital Dot Matrix digunakan dengan cara :
1. Beri sumber Power pada Arduino dengan cara menghubungkan kabel Jack 2.1 mm Battery ke Arduino
2. Dadu Digital Dot Matrix akan otomatis menyala.
3. Berikan Getaran dengan cara menggoyangkan sensor getar SW-420
4. Dadu akan melakukan pengocokan random dan menampilkan mata dadu sesuai dengan mode dadu yang diaktifkan pada sketch
