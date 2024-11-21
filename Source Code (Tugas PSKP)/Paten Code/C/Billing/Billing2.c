#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int Harga_barang1;
	int Harga_barang2;
	int Harga_barang3;
	int Harga_barang4;
	int Harga_barang5;
	int Kuantitas1;
	int Kuantitas2;
	int Kuantitas3;
	int Kuantitas4;
	int Kuantitas5;
	
	int Nominal_uang;
	
	int Total_barang1 	   		= Harga_barang1 * Kuantitas1;
	int Total_barang2      		= Harga_barang2 * Kuantitas2;
	int Total_barang3      		= Harga_barang3 * Kuantitas3;
	int Total_barang4      		= Harga_barang4 * Kuantitas4;
	int Total_barang5      		= Harga_barang5 * Kuantitas5;
	int Total_barang_akhir 		= Total_barang1 + Total_barang2 + Total_barang3 + Total_barang4 + Total_barang5;

	float a;
	float Diskon_input  		= a/100;
	float Pajak_p_nilai 		= 0.11;
	float Diskon_jumlah 		= Diskon_input * Total_barang_akhir;
	float Jumlah_akhir  		= Total_barang_akhir - Diskon_jumlah;
	
	float Pajak_included        = Pajak_p_nilai * Jumlah_akhir;
	float Harga_termasuk_ppn    = Jumlah_akhir + Pajak_included;
	float dpp                   = 100/(100 + (Pajak_p_nilai)) * Harga_termasuk_ppn;
	float ppn_terutang          = Pajak_p_nilai * dpp;
	float Jumlah_termasuk_pajak = ppn_terutang + Harga_termasuk_ppn;
	float Kembalian             = Nominal_uang - Jumlah_termasuk_pajak;
	
//	system("Color F1");
//	printf("============================== Hi-Tech Authorized Store ==============================\n\n");
	printf("**********************************************************************************************\n");
	printf("\t\t\t       Hi-Tech International Incorporated \n");
	printf("**********************************************************************************************\n\n");
	printf("========================================== INVOICE ===========================================\n");
	printf("                                                    Referensi        : INV/2024/0085\n");
	printf("                                                    Tanggal          : 05/07/2024\n");
	printf("                                                    Tgl. Jatuh Tempo : 25/07/2024\n");
	printf("                                                    No. NPWP         : 65.871. 662.3-052.000\n\n\n");
	printf("Info Perusahaan                                       Tagihan Untuk\n");
	printf("-----------------------------------------             -----------------------------------------\n");
	printf("HI-TECH INTERNATIONAL                                 Raffi Yushronatha Andika\n");
	printf("Jl. H. Baping GG. Bhakti II No. 109                   Jl. Kemuraya No. 76\n");
	printf("Susukan, Ciracas                                      Kramat, Senen\n");
	printf("East Jakarta, 13750                                   Central Jakarta, 10220\n");
	printf("Indonesia                                             Indonesia\n");
	printf("Telp: 0895391515458                                   Telp. 08135478663542\n");
	printf("Email: hitechinter@smart.id                           Email: andikaraffi25@gmail.com\n\n\n");
	sleep(2);
	
	printf("Produk 1    : Glad2Glow Blueberry 5%% Ceramide Moisturizer\n");
	printf("Deskripsi   : memperbaiki dan merawat skin barrier, menghidrasi, serta meningkatkan \n");
	printf("              kelembaban kulit\n");
	printf("Harga Barang: Rp");
	scanf("%d", &Harga_barang1);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas1);
	Total_barang1 = Harga_barang1 * Kuantitas1;
	printf("Total       : Rp%d", Total_barang1);
	printf("\n\n\n");		
	
	printf("Produk 2    : ROBOT RS10 Bluetooth Audio Receiver With 5.0\n");
	printf("Deskripsi   : Audio receiver with bluetooth 5.0, kualitas suara HD, latensi rendah,\n");
	printf("              10 hour play time\n");
	printf("Harga Barang: Rp");
	scanf("%d", &Harga_barang2);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas2);
	Total_barang2 = Harga_barang2 * Kuantitas2;
	printf("Total       : Rp%d", Total_barang2);
	printf("\n\n\n");	 	
	
	printf("Produk 3    : Cypruz Panci Susu Anti Lengket Sauce Pan Premium Featherlight Series\n");
	printf("Deskripsi   : Menggunakan teknik pressed sehingga 2x lebih kokoh dan tahan lama.\n");
	printf("              Wajan lebih ringan, dengan tebal 2.2 mm.\n");
	printf("Harga Barang: Rp");
	scanf("%d", &Harga_barang3);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas3);
	Total_barang3 = Harga_barang3 * Kuantitas3;
	printf("Total       : Rp%d", Total_barang3);
	printf("\n\n\n");	
	
	printf("Produk 4    : Classic colour pencils 48 - Faber-Castell\n");
	printf("Deskripsi   : Castell yang dibuat dengan teknologi Jerman menjadikan waktu berkreasi lebih\n");
	printf("              aman karena materialnya bebas bahan beracun\n");
	printf("Harga Barang: Rp");
	scanf("%d", &Harga_barang4);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas4);
	Total_barang4 = Harga_barang4 * Kuantitas4;
	printf("Total       : Rp%d", Total_barang4);
	printf("\n\n\n");	
	
	printf("Produk 5    : Filosofi Teras - Henry Manampiring - Softcover\n");
	printf("Deskripsi   : Jauh dari kesan filsafat sebagai topik berat dan mengawang-awang, Filosofi Teras\n");
	printf("              justru bersifat praktis dan relevan dengan kehidupan Generasi Milenial dan Gen-Z masa kini\n");
	printf("Harga Barang: Rp");
	scanf("%d", &Harga_barang5);
	printf("Kuantitas   : ");
	scanf("%d", &Kuantitas5);
	Total_barang5 = Harga_barang5 * Kuantitas5;
	printf("Total       : Rp%d", Total_barang5);
	printf("\n\n\n");
	
	printf("------------------------------------------------------------------------------------------------\n");
	
	Total_barang_akhir = Total_barang1 + Total_barang2 + Total_barang3 + Total_barang4 + Total_barang5;
	printf("\t\t\t\t\t\t\t\tTotal Barang       : Rp%d\n", Total_barang_akhir);
	
	Diskon_input = a/100;
	printf("\t\t\t\t\t\t\t\tDiskon (persen)    : ");
	scanf("%f", &a);
	printf("\t\t\t\t\t\t\t\tNominal Uang       : Rp");
	scanf("%d", &Nominal_uang);	
	
	Diskon_input = a/100;
	Diskon_jumlah = Diskon_input * Total_barang_akhir;
	printf("\t\t\t\t\t\t\t\tHarga Diskon       : Rp%.2f\n", Diskon_jumlah);
	Jumlah_akhir = Total_barang_akhir - Diskon_jumlah;
	printf("\t\t\t\t\t\t\t\tHarga Akhir        : Rp%.2f\n", Jumlah_akhir);
	printf("\n");
	
	Pajak_included = Pajak_p_nilai * Jumlah_akhir;
	printf("\t\t\t\t\t\t\t\tPajak Included     : Rp%.2f\n", Pajak_included);
	Harga_termasuk_ppn = Jumlah_akhir + Pajak_included;
	printf("\t\t\t\t\t\t\t\tHarga Termasuk PPN : Rp%.2f\n", Harga_termasuk_ppn);
	dpp = 100/(100 + (Pajak_p_nilai)) * Harga_termasuk_ppn;
//	printf("\t\t\t\t\t\t\t\tDPP Terutang       : Rp%.2f\n", dpp);
	ppn_terutang = Pajak_p_nilai * dpp;
	Jumlah_termasuk_pajak = ppn_terutang + Harga_termasuk_ppn;
	printf("\t\t\t\t\t\t\t\tJumlah Tertagih    : Rp%.2f\n", Jumlah_termasuk_pajak);
	Kembalian = Nominal_uang - Jumlah_termasuk_pajak;
	printf("\t\t\t\t\t\t\t\tKembalian          : Rp%.2f\n", Kembalian);
	printf("\n\n\n");
	
	printf("-------------------------------------------------------------------------------------\n");
	printf("                          Syarat dan ketentuan berlaku\n");
	printf("-------------------------------------------------------------------------------------\n");
	printf("Jika Anda tidak dapat melunasi sesuai tanggal jatuh tempo, maka ada jaminan yang kami\n");
	printf("berikan kepada Anda atau kami akan memblokir nomor rekening Anda beserta identitas \n");
	printf("sebagai alat pembayan \n\n");
	
	printf("Faktur ini dibuat sebagai bukti pembayaran atau tagihan. Kami tidak bertanggung jawab\n");
	printf("atas kerusakan atau kehilangan bukti pembayaran tersebut.\n");
	printf("Simpan bukti pembayaran ini baik-baik.\n\n");
	
	printf("ALL RIGHT RESERVED 2024\n");

}	