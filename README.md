# Kelime Sayacı Uygulaması

Bu uygulama, kullanıcıdan bir metin girmesini isteyen ve bu metindeki __kelime sayısını__ hesaplayan bir programdır.

Program, girilen metindeki kelimeleri sayarak, kullanıcıya metinde kaç kelime olduğunu gösterir. Bu tür bir işlevsellik, metin işleme uygulamaları, metin analizi, metin tabanlı oyunlar gibi birçok alanda yararlı olabilir.

### **Uygulamanın nasıl yazıldığını inceleyelim:**

![image](https://github.com/isleyen/wordCounter/assets/136992260/6b000d2a-498e-40cc-badf-e6d2657edb16)

Standart kütüphanelerimizi tanımladıktan sonra hızlıca bir intkelimesay fonksiyonumuzu oluşturduk.

![image](https://github.com/isleyen/wordCounter/assets/136992260/b8cc2b26-1183-4452-b4f1-aad4b4cbc484)

__kelimesay__ fonskiyonumuz için **sayac** degiskeni olusturup 0 olarak başlattık.

"__bool kelime__" ifademizi de false olarak başlattık.

![image](https://github.com/isleyen/wordCounter/assets/136992260/8747e1a8-56d5-4b85-8c43-11ea7eec6b4d)

For döngümüzün içerisindeki ilk "__if__" de amacımız isalpha(c) ile karakter mi değil mi kontrolü yapmak. Eğer bir karakterse "bool kelime = true" yapmak.

"__else if__" kısmında ise amacımız boşluk mu değil mi diye kontrol etmek eğer ifade boşluksa ve önceki kelime sayaç ifademiz de true ise "__sayac__"ımızı +1 yapmak. Sondaki bool ifade ise sayaca +1 ekledikten sonra bool ifademiz true kalmasın ve biradahki kontrolde işler karışmasın diye bool'ı fabrika ayarlarına geri döndürmek.

![image](https://github.com/isleyen/wordCounter/assets/136992260/80a98f35-73e8-4c05-87bd-aa78d2a45d28)

> [!IMPORTANT]
> Peki for döngümüzden sonraki if değişkeninin işlevi ne??

Amacımız: Eğer girilen metnin son kelimesindeysek ve bu kelimenin son harfindeysek mantıken else if kısımı true olamayacak(çünkü son harften önceki karakter de harf, boşluk değil) bunun sonucundabu kelime sayılamayacak. Sonucu da bir eksik verecek kullanıcıya. Bunun için şunu diyoruz tüm kontrol bittikten sonra ve for döngüsünden çıkıldıktan sonra "bool kelime = true" olarak kalacak ve döngüden çıkıca da __if__'e girip __sayac__'a +1 ekleyerek doğru sonucu elde edeceğiz.

![image](https://github.com/isleyen/wordCounter/assets/136992260/77179e3f-7a3f-4cb3-8c65-b6069028bca0)

Son olarak da kullanıcıdan bir metin alıyoruz ve fonksiyonumuzu çağırarak gerekli işlemleri gerçekleştiriyoruz.

![image](https://github.com/isleyen/wordCounter/assets/136992260/a2de406e-cd6c-4db2-ab07-d615ba12cc7b)

> [!WARNING]
> Lütfen Programı kullanırken türkçe karakterler girmeyiniz (ı,ö,ü vb.).

**Hedef Dosya**: main.cpp
