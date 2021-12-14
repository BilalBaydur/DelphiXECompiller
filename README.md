# DelphiXECompiller
Delphi projesini komut satırı veya azure devops ortamında nasıl derleyeceğinizi gösteren basit bir uygulama

# dcc32.cfg yapılandırması
Bu dosya ile derlemenin ihtiyaç duydugu parametreleri belirleriz. Not defteri ile açarak düzenleyebilirsiniz.
İlk önce bu dosya içinde belirtmiş olduğumuz yolları projeyi kaydettiğiniz yere göre düzenleyin.

-N0F:\Compiller\DCU : DCU dosyalarının oluşturulacağı dizin
-LNF:\Compiller\DCP : DCP dosyalarının oluşturulacağı dizin
-LEF:\Compiller\EXE : Bpl dosyalarının oluşturulacağı dizin
-EF:\Compiller\EXE  : Exe'nin çıkartılacağı dizin

# Projeyi iki şekilde test edebilirsiniz.
1. test.bat dosyasını çift tıklayarak
2. Azure Devops ortamını oluşturarak. Bu biraz daha karmaşık gelebilir. 
   
    Ben Azure devops server Kullandığım için build server'ı kendim barındırımıştım. Yapmanız gereken 'TestCompiller' isimdeki proje klasörünüzü azure üstündeki bir 
repository'ye yüklemek. Daha sonra build server üzerinde uygun bir yere, DelphiXE, DCU, DCP, EXE klasörlerini atmalısınız. Sonrasında 'azure-pipelines.yml' dosyasının 
içeriğini, projenizde oluşturacağınız bir build pipeline içine kopyalayabilirsiniz. Yml dosyası içindeki yolları düzelttiğiniz takdirde, öyle sanıyorum problemsiz bir 
şekilde kodunuzu derleye bilirsiniz.  
    
