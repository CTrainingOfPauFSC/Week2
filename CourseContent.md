Dizi Nedir ?
---------------
Dizi bir kümedir.Aynı tip verilere tek bir isimle erişmek 
için kullanılır.Bir dizinin bütün elemanları bellekte peş peşe 
sıralanır.

Dizileri Neden Kullanıyoruz ?
-----------------------
Bir bilgisayar programı yaptığımızı düşünelim.Kullanıcıdan 100
değer girmesini isteyelim.Girilen bütün sayıların farklı aşamalardan
geçeceğini varsayalım ve bu nedenle hepsini ayrı bir değişkende 
tutmamız gerektiğini varsayalım.Bu durumda ne yapardınız?
a0,a1,a2....a100 şeklinde 100 tane değişken tanımlamak mümkün değil
bunu yapacak kadar süremiz de yok işte tam bu noktada dizilere
ihtiyaç duyarız.

Dizi Tipleri       --    Genel Format
-----------
```
Tek Boyutlu  ---------->  tip isim[eleman sayısı]; ör=int a[10];

iki Boyutlu   --------->  tip isim[satır sayısı][sütun s.]; ör=float a[3][4];

Çok Boyutlu  ---------->  tip isim [boyu-1][boyut-2][...] ör=double a[2][3][4];
```

Dizilere Başlangıç Değeri Atama
------------------------------
```
int x[5]={5,0,6};
int y[]={1,5,9};
char x[2][3]={"Ata","Bak","Top"};
```
Not:C programlama dilin de ilk indis numarası 0 ile başlar.

Dizi Değişkenler
----------------
Daha öncede görmüş olduðumuz bütün değişken tiplerinde tanımlanabilir
diziler.

Bellekte Ayrılan Alan
----------------------
Derste çizim Yapılarak Anlatılacak (a[10],b[3][4])


Char Tipi Diziler
------------------
C programlama dilinde string diye bir değişken tipi bulunmaz bunun
yerine "char" tipi değişkenler bulunur,bunlar dizi olarak tanımlandıktan sonra
ifadeleri tutarlar.
```
Tanımlanma şekli-->char isim[3][5];
```
Not:String ifadelerin son elemanından bir sonraki hücreye derleyici
tarafından string sonu karakteri (\0) konulacağı için; 5 
harflik bir kelimeyi tutmak üzere en az 6 elemanlı bir char tipi
dizi değişken tanımlanmalıdır.
 