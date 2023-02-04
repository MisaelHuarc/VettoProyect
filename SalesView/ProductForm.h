#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPriceMin;

	private: System::Windows::Forms::TextBox^ txtStock;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::DataGridView^ dgvProducts;







	private: System::Windows::Forms::TextBox^ txtPriceMaj;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cmbCareer1;
	private: System::Windows::Forms::ComboBox^ cmbCareer2;
	private: System::Windows::Forms::ComboBox^ cmbCareer3;
	private: System::Windows::Forms::ComboBox^ cmbCareer4;
	private: System::Windows::Forms::ComboBox^ cmbCareer5;
	private: System::Windows::Forms::RadioButton^ rbComunConfirmation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;













	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMin = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cmbCareer1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCareer2 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCareer3 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCareer4 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCareer5 = (gcnew System::Windows::Forms::ComboBox());
			this->rbComunConfirmation = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			this->label1->Click += gcnew System::EventHandler(this, &ProductForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 63);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 94);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 152);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio (min)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 200);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 233);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Carrera relacionada:";
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(136, 28);
			this->txtProductId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(76, 20);
			this->txtProductId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(136, 63);
			this->txtName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(172, 20);
			this->txtName->TabIndex = 7;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(136, 94);
			this->txtDescription->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(230, 48);
			this->txtDescription->TabIndex = 8;
			// 
			// txtPriceMin
			// 
			this->txtPriceMin->Location = System::Drawing::Point(136, 146);
			this->txtPriceMin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPriceMin->Name = L"txtPriceMin";
			this->txtPriceMin->Size = System::Drawing::Size(76, 20);
			this->txtPriceMin->TabIndex = 9;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(136, 200);
			this->txtStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(76, 20);
			this->txtStock->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(27, 297);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(69, 24);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(184, 296);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(70, 25);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(309, 296);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(64, 25);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(481, 10);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(218, 230);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbPhoto->TabIndex = 15;
			this->pbPhoto->TabStop = false;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(358, 15);
			this->btnSetImage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(110, 27);
			this->btnSetImage->TabIndex = 16;
			this->btnSetImage->Text = L"Agregar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &ProductForm::btnSetImage_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dgvProducts->Location = System::Drawing::Point(9, 355);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->RowTemplate->Height = 24;
			this->dgvProducts->Size = System::Drawing::Size(745, 122);
			this->dgvProducts->TabIndex = 17;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProducts_CellClick);
			this->dgvProducts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio Unit(min.)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio Unit(may.)";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 75;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Carreras dest.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 500;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Stock";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// txtPriceMaj
			// 
			this->txtPriceMaj->Location = System::Drawing::Point(136, 172);
			this->txtPriceMaj->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPriceMaj->Name = L"txtPriceMaj";
			this->txtPriceMaj->Size = System::Drawing::Size(76, 20);
			this->txtPriceMaj->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 178);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Precio (may)";
			// 
			// cmbCareer1
			// 
			this->cmbCareer1->FormattingEnabled = true;
			this->cmbCareer1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"mecatronica", L"civil", L"electronica", L"industrial",
					L"informatica"
			});
			this->cmbCareer1->Location = System::Drawing::Point(136, 250);
			this->cmbCareer1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbCareer1->Name = L"cmbCareer1";
			this->cmbCareer1->Size = System::Drawing::Size(92, 21);
			this->cmbCareer1->TabIndex = 21;
			// 
			// cmbCareer2
			// 
			this->cmbCareer2->FormattingEnabled = true;
			this->cmbCareer2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"mecatronica", L"civil", L"electronica", L"industrial",
					L"informatica"
			});
			this->cmbCareer2->Location = System::Drawing::Point(249, 250);
			this->cmbCareer2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbCareer2->Name = L"cmbCareer2";
			this->cmbCareer2->Size = System::Drawing::Size(92, 21);
			this->cmbCareer2->TabIndex = 22;
			// 
			// cmbCareer3
			// 
			this->cmbCareer3->FormattingEnabled = true;
			this->cmbCareer3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"mecatronica", L"civil", L"electronica", L"industrial",
					L"informatica"
			});
			this->cmbCareer3->Location = System::Drawing::Point(358, 250);
			this->cmbCareer3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbCareer3->Name = L"cmbCareer3";
			this->cmbCareer3->Size = System::Drawing::Size(92, 21);
			this->cmbCareer3->TabIndex = 23;
			// 
			// cmbCareer4
			// 
			this->cmbCareer4->FormattingEnabled = true;
			this->cmbCareer4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"mecatronica", L"civil", L"electronica", L"industrial",
					L"informatica"
			});
			this->cmbCareer4->Location = System::Drawing::Point(467, 250);
			this->cmbCareer4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbCareer4->Name = L"cmbCareer4";
			this->cmbCareer4->Size = System::Drawing::Size(92, 21);
			this->cmbCareer4->TabIndex = 24;
			// 
			// cmbCareer5
			// 
			this->cmbCareer5->FormattingEnabled = true;
			this->cmbCareer5->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"mecatronica", L"civil", L"electronica", L"industrial",
					L"informatica"
			});
			this->cmbCareer5->Location = System::Drawing::Point(574, 250);
			this->cmbCareer5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbCareer5->Name = L"cmbCareer5";
			this->cmbCareer5->Size = System::Drawing::Size(92, 21);
			this->cmbCareer5->TabIndex = 25;
			// 
			// rbComunConfirmation
			// 
			this->rbComunConfirmation->AutoSize = true;
			this->rbComunConfirmation->Location = System::Drawing::Point(151, 229);
			this->rbComunConfirmation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rbComunConfirmation->Name = L"rbComunConfirmation";
			this->rbComunConfirmation->Size = System::Drawing::Size(119, 17);
			this->rbComunConfirmation->TabIndex = 26;
			this->rbComunConfirmation->TabStop = true;
			this->rbComunConfirmation->Text = L"En muchas carreras";
			this->rbComunConfirmation->UseVisualStyleBackColor = true;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 495);
			this->Controls->Add(this->rbComunConfirmation);
			this->Controls->Add(this->cmbCareer5);
			this->Controls->Add(this->cmbCareer4);
			this->Controls->Add(this->cmbCareer3);
			this->Controls->Add(this->cmbCareer2);
			this->Controls->Add(this->cmbCareer1);
			this->Controls->Add(this->txtPriceMaj);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPriceMin);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtProductId->Text->Trim() == "") {
		MessageBox::Show("El Id del producto no debe estar vacío.");
		return;
	}
	if (txtName->Text->Trim() == "") {
		MessageBox::Show("El nombre del producto no debe estar vacío.");
		return;
	}
	if (txtDescription->Text->Trim() == "") {
		MessageBox::Show("La descripcion del producto no debe estar vacío.");
		return;
	}
	if (txtPriceMin->Text->Trim() == "") {
		MessageBox::Show("El precio minorista no debe estar vacío.");
		return;
	}
	if (txtPriceMaj->Text->Trim() == "") {
		MessageBox::Show("El precio mayorista no debe estar vacío.");
		return;
	}
	if (txtStock->Text->Trim() == "") {
		MessageBox::Show("El stock no debe estar vacío.");
		return;
	}
	if ((!(rbComunConfirmation->Checked)) && (cmbCareer1->SelectedIndex < 0 && cmbCareer2->SelectedIndex < 0 && cmbCareer3->SelectedIndex < 0 && cmbCareer4->SelectedIndex < 0 && cmbCareer5->SelectedIndex < 0)) {
		MessageBox::Show("Debe elegir alguna carrera relacionada");
		return;
	}

	Product^ product = gcnew Product();
	product->Id=Convert::ToInt32(txtProductId->Text);
	product->Name = txtName->Text;
	product->Description = txtDescription->Text;
	product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
	product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
	product->Stock = Convert::ToInt32(txtStock->Text);
	product->Status = 'A';
	product->Career = gcnew List<String^>();
	if (rbComunConfirmation->Checked) {

		product->Career = Controller::QueryAllCareers();
	} 
	else {
		if (cmbCareer1->SelectedIndex >=0 ) product->Career->Add(cmbCareer1->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer2->SelectedIndex >= 0) product->Career->Add(cmbCareer2->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer3->SelectedIndex >= 0) product->Career->Add(cmbCareer3->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer4->SelectedIndex >= 0) product->Career->Add(cmbCareer4->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer5->SelectedIndex >= 0) product->Career->Add(cmbCareer5->SelectedItem->ToString());
		else product->Career->Add("");
	}

	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		product->Photo = ms->ToArray();
	}

	Controller::AddProduct(product);

	CleanControls();
	ShowProducts();
}

void ShowProducts() {
	List<Product^>^ myProductList = Controller::QueryAllProducts();

	dgvProducts->Rows->Clear();
		for (int i = 0; i < myProductList->Count; i++) {
			if (myProductList[i]->Career->Count > 5) {
				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->PriceMaj,
						"Producto comun a muchas carreras",
						"" + myProductList[i]->Stock
				});
			}
			else {
				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->PriceMaj,
						myProductList[i]->Career[0]+" " + myProductList[i]->Career[1]+ " " + myProductList[i]->Career[2]+ " " + myProductList[i]->Career[3]+" " + myProductList[i]->Career[4],
						"" + myProductList[i]->Stock
				});
			}
		}
}

void CleanControls() {
	txtProductId->Clear();
	txtName->Clear();
	txtDescription->Clear();
	txtPriceMin->Clear();
	txtPriceMaj->Clear();
	txtStock->Clear();
	pbPhoto->Image = nullptr;
	rbComunConfirmation->Checked=false;
	cmbCareer1->SelectedIndex = -1;
	cmbCareer2->SelectedIndex = -1;
	cmbCareer3->SelectedIndex = -1;
	cmbCareer4->SelectedIndex = -1;
	cmbCareer5->SelectedIndex = -1;
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowProducts();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ product = gcnew Product();
	product->Id = Convert::ToInt32(txtProductId->Text);
	product->Name = txtName->Text;
	product->Description = txtDescription->Text;
	product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
	product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
	product->Stock = Convert::ToInt32(txtStock->Text);
	product->Status = 'A';
	product->Career = gcnew List<String^>();
	if (rbComunConfirmation->Checked) {

		product->Career = Controller::QueryAllCareers();
	}
	else {
		if (cmbCareer1->SelectedIndex >= 0) product->Career->Add(cmbCareer1->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer2->SelectedIndex >= 0) product->Career->Add(cmbCareer2->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer3->SelectedIndex >= 0) product->Career->Add(cmbCareer3->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer4->SelectedIndex >= 0) product->Career->Add(cmbCareer4->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer5->SelectedIndex >= 0) product->Career->Add(cmbCareer5->SelectedItem->ToString());
		else product->Career->Add("");
	}

	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		product->Photo = ms->ToArray();
	}

	Controller::UpdateProduct(product);

	CleanControls();
	ShowProducts();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int ID = Convert::ToInt32(txtProductId->Text);
	Controller::DeleteProduct(ID);
	CleanControls();
	ShowProducts();
}
private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}

}
private: System::Void dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int selectedRowIndex = dgvProducts->SelectedCells[0]->RowIndex;
	int productId = Convert::ToInt32(dgvProducts->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);
	txtProductId->Text = "" + p->Id;
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtPriceMin->Text = "" + p->PriceMin;
	txtPriceMaj->Text = "" + p->PriceMaj;
	txtStock->Text = "" + p->Stock;
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}
};
}
