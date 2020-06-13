# KGV - Final-Project
Projek akhir untuk matakuliah komputer grafik dan visualisasi menggunakan library freeglut untuk objek 3 dimensi

# Creator
Nama: Joko Prasetyo </br>
NIM : 181401124 </br>
KOM : A </br>

# Deskripsi Project
Projek ini bertemakan "3D Bow Shooter" merupakan sebuah game open world fps (infinite game) dimana didalamnya terdapat objek terain/tanah yang berfungsi sebagai alas atau landasan player, kemudian terdapat objek rumah yang disusun dengan menggunakan GL_POLYGON dan glVertex3f sehingga akan membentu suatu faces untuk masing masing facesnya akan disusun masing masing atas, kanan, kiri, belakang sehingga akan membentuk objek rumah, kemudian untuk objek selanjutnya adalah pohon dimana objek ini bentuk dengan menggunakan beberapa segment dan juga menggunakan fungsi random recursive sehingga ranting/cabang pohon yang ditampilkan setiap kali program di render akan berubah, kemudian objek selanjutnya adalah busur dan juga panah yang berfungsi untuk menembak silinder, dan objek terakhir adalah silider yang berfungsi sebagai target acuan terhadap score pada bagian silinder ini ada 3 segment untuk penilaian score kuning = 3, merah = 2, biru = 1. Jadi pada awalnya player akan spawn di tengah tengah map, player dapat bergerak bebas dan juga bebas untuk menggerakkan kamera sesuai dengan cursor yang ada. Kemudian player juga dapat menarik busur dan juga mengambil panah yang sudah di tembak. Ketika player menembakkan segment segment yang ada pada bagian silinder/target maka player tersebut akan mendapatkan score sesuai dengan penilaian segment merah, biru, kuning. 
</br>
![](https://i.ibb.co/ww8fXwF/ezgif-com-video-to-gif-4.gif)

# Dokumentasi 
Berikut adalah beberapa key listener yang tersedia pada game ini: </br> 
ESC: Untuk keluar dari game </br> 
W: Menggerakkan player ke depan </br> 
A: Menggerakkan player ke kiri </br> 
S: menggerakkan player ke belakang </br> 
D: Menggerakkan player ke kanan </br> 
Mouse Movement: merotasikan layar </br>
Mouse Wheel (Belakang): Menarik busur </br>
Mouse Left Click: Menembakan panah </br>
