# 🏦 C Bankamatik (ATM) Simülasyonu

Bu proje, bir ATM'nin temel işlevlerini (bakiye sorgulama, para çekme/yatırma, fatura ödeme) simüle eden, döngüsel ve menü tabanlı bir **C programlama** uygulamasıdır.

---

## ✨ Özellikler

* **Bakiye Yönetimi:** Kullanıcı başlangıç bakiyesini girer ve tüm işlemler bu bakiye üzerinden dinamik olarak güncellenir.
* **Para İşlemleri:** Hızlı para çekme ve yatırma fonksiyonları ile bakiye geçmişi takibi.
* **Fatura Ödeme Sistemi:** Su, Elektrik, İnternet ve Telefon faturaları için alt menü desteği.
* **Borç Kontrolü:** `sayac` mekanizması sayesinde bir faturanın mükerrer (birden fazla kez) ödenmesi engellenir.
* **Kullanıcı Dostu Arayüz:** `system("CLS")` komutu ile her işlemden sonra temizlenen, düzenli bir konsol ekranı.

---

## 🛠 Teknik Mimari

Proje, kontrol akış yapılarını etkin bir şekilde kullanır:



* **Switch-Case Yapısı:** Ana menü ve fatura alt menüsü için iç içe geçmiş (nested) karar yapıları.
* **Sonsuz Döngü Mantığı:** Kullanıcı "Çıkış Yap" seçeneğini seçene kadar programın aktif kalmasını sağlayan `for` döngüsü yönetimi.
* **Değişken Takibi:** Eski ve yeni bakiye bilgilerini saklayarak işlem özeti sunan mantıksal yapı.

---

## 🚀 Kurulum ve Çalıştırma

1.  C derleyiciniz (GCC, Dev-C++, Visual Studio) ile kodu derleyin:
    ```bash
    gcc bankamatik.c -o bankamatik
    ```
2.  Uygulamayı çalıştırın:
    ```bash
    ./bankamatik
    ```

---

## 📋 İşlem Menüsü

Uygulama başlatıldığında aşağıdaki seçenekleri sunar:
1. **Bakiye Görüntüle:** Güncel bakiyeyi ekrana basar.
2. **Para Yatır:** Girilen miktarı mevcut bakiyeye ekler.
3. **Para Çek:** Girilen miktarı bakiyeden düşer.
4. **Fatura Öde:** Sabit fiyatlı fatura ödeme listesini açar.
5. **Çıkış Yap:** Programı güvenli bir şekilde sonlandırır.

