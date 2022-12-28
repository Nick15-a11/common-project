#pragma once

namespace ISiTApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;//äåñòðóêòîð äëÿ îñâîáîæäåíèÿ ïàìÿòè
			}
		}

	private: System::Windows::Forms::Label^ mainlabel;
	private: System::Windows::Forms::Button^ butn_ac;
	private: System::Windows::Forms::Button^ butn_percent;





	private: System::Windows::Forms::Button^ butn_devide;
	private: System::Windows::Forms::Button^ butn_prouz;




	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ butn_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ butn_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ butn_tochka;



	private: System::Windows::Forms::Button^ button20;
	private: float first_num;
	private: char user_action=' ';
	private: bool is_ravno = false;
	private: System::Windows::Forms::Button^ butn_ravno;
	private: System::Windows::Forms::Button^ butn_znak;
	protected:

	protected:




	protected:



	protected:

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->mainlabel = (gcnew System::Windows::Forms::Label());
			this->butn_ac = (gcnew System::Windows::Forms::Button());
			this->butn_percent = (gcnew System::Windows::Forms::Button());
			this->butn_devide = (gcnew System::Windows::Forms::Button());
			this->butn_prouz = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->butn_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->butn_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->butn_tochka = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->butn_ravno = (gcnew System::Windows::Forms::Button());
			this->butn_znak = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mainlabel
			// 
			this->mainlabel->BackColor = System::Drawing::Color::MediumOrchid;
			this->mainlabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainlabel->ForeColor = System::Drawing::Color::Black;
			this->mainlabel->Location = System::Drawing::Point(2, 9);
			this->mainlabel->Name = L"mainlabel";
			this->mainlabel->Size = System::Drawing::Size(318, 70);
			this->mainlabel->TabIndex = 1;
			this->mainlabel->Text = L"0";
			this->mainlabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// butn_ac
			// 
			this->butn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_ac->Location = System::Drawing::Point(2, 93);
			this->butn_ac->Name = L"butn_ac";
			this->butn_ac->Size = System::Drawing::Size(74, 41);
			this->butn_ac->TabIndex = 2;
			this->butn_ac->Text = L"AC";
			this->butn_ac->UseVisualStyleBackColor = false;
			this->butn_ac->Click += gcnew System::EventHandler(this, &MyForm::butn_ac_Click);
			// 
			// butn_percent
			// 
			this->butn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_percent->Location = System::Drawing::Point(162, 93);
			this->butn_percent->Name = L"butn_percent";
			this->butn_percent->Size = System::Drawing::Size(74, 41);
			this->butn_percent->TabIndex = 4;
			this->butn_percent->Text = L"%";
			this->butn_percent->UseVisualStyleBackColor = false;
			this->butn_percent->Click += gcnew System::EventHandler(this, &MyForm::butn_percent_Click);
			// 
			// butn_devide
			// 
			this->butn_devide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_devide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_devide->Location = System::Drawing::Point(246, 93);
			this->butn_devide->Name = L"butn_devide";
			this->butn_devide->Size = System::Drawing::Size(74, 41);
			this->butn_devide->TabIndex = 5;
			this->butn_devide->Text = L"/";
			this->butn_devide->UseVisualStyleBackColor = false;
			this->butn_devide->Click += gcnew System::EventHandler(this, &MyForm::butn_devide_Click);
			// 
			// butn_prouz
			// 
			this->butn_prouz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_prouz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_prouz->Location = System::Drawing::Point(246, 152);
			this->butn_prouz->Name = L"butn_prouz";
			this->butn_prouz->Size = System::Drawing::Size(74, 41);
			this->butn_prouz->TabIndex = 9;
			this->butn_prouz->Text = L"*";
			this->butn_prouz->UseVisualStyleBackColor = false;
			this->butn_prouz->Click += gcnew System::EventHandler(this, &MyForm::butn_prouz_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(162, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 41);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(82, 152);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 41);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(2, 152);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(74, 41);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// butn_minus
			// 
			this->butn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_minus->Location = System::Drawing::Point(246, 213);
			this->butn_minus->Name = L"butn_minus";
			this->butn_minus->Size = System::Drawing::Size(74, 41);
			this->butn_minus->TabIndex = 13;
			this->butn_minus->Text = L"-";
			this->butn_minus->UseVisualStyleBackColor = false;
			this->butn_minus->Click += gcnew System::EventHandler(this, &MyForm::butn_minus_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(162, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(74, 41);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(82, 213);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(74, 41);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(2, 213);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(74, 41);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// butn_plus
			// 
			this->butn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_plus->Location = System::Drawing::Point(246, 274);
			this->butn_plus->Name = L"butn_plus";
			this->butn_plus->Size = System::Drawing::Size(74, 41);
			this->butn_plus->TabIndex = 17;
			this->butn_plus->Text = L"+";
			this->butn_plus->UseVisualStyleBackColor = false;
			this->butn_plus->Click += gcnew System::EventHandler(this, &MyForm::butn_plus_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(162, 274);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 41);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(82, 274);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(74, 41);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(2, 274);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(74, 41);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// butn_tochka
			// 
			this->butn_tochka->Location = System::Drawing::Point(162, 330);
			this->butn_tochka->Name = L"butn_tochka";
			this->butn_tochka->Size = System::Drawing::Size(74, 41);
			this->butn_tochka->TabIndex = 20;
			this->butn_tochka->Text = L".";
			this->butn_tochka->UseVisualStyleBackColor = true;
			this->butn_tochka->Click += gcnew System::EventHandler(this, &MyForm::butn_tochka_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(2, 330);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(154, 41);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// butn_ravno
			// 
			this->butn_ravno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_ravno->Location = System::Drawing::Point(246, 330);
			this->butn_ravno->Name = L"butn_ravno";
			this->butn_ravno->Size = System::Drawing::Size(74, 41);
			this->butn_ravno->TabIndex = 21;
			this->butn_ravno->Text = L"=";
			this->butn_ravno->UseVisualStyleBackColor = false;
			this->butn_ravno->Click += gcnew System::EventHandler(this, &MyForm::butn_ravno_Click);
			// 
			// butn_znak
			// 
			this->butn_znak->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butn_znak->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_znak->Location = System::Drawing::Point(82, 93);
			this->butn_znak->Name = L"butn_znak";
			this->butn_znak->Size = System::Drawing::Size(74, 41);
			this->butn_znak->TabIndex = 22;
			this->butn_znak->Text = L"-/+";
			this->butn_znak->UseVisualStyleBackColor = false;
			this->butn_znak->Click += gcnew System::EventHandler(this, &MyForm::butn_znak_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->ClientSize = System::Drawing::Size(322, 388);
			this->Controls->Add(this->butn_znak);
			this->Controls->Add(this->butn_ravno);
			this->Controls->Add(this->butn_tochka);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->butn_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->butn_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->butn_prouz);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->butn_devide);
			this->Controls->Add(this->butn_percent);
			this->Controls->Add(this->butn_ac);
			this->Controls->Add(this->mainlabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Navy;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   private: System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->mainlabel->ForeColor = Color::Black;
			   Button^ button = safe_cast<Button^>(sender);
			  

			   if (this->mainlabel->Text == "0" || is_ravno) {
				   is_ravno = false;
				   this->mainlabel->Text = button->Text;
			   }
			   else
				   this->mainlabel->Text = this->mainlabel->Text + button->Text;
		   }
	
private: System::Void butn_devide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void butn_prouz_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void butn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void butn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->mainlabel->Text);
		this->user_action = action;
		this->mainlabel->Text = "0";
	}

private: System::Void butn_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;

	float second = System::Convert::ToDouble(this->mainlabel->Text);
	float res;
	switch (this->user_action) {
	case '+':res = this->first_num + second; break;
	case '-':res = this->first_num - second; break;
	case '*':res = this->first_num * second; break;
	case '%':res = this->first_num * second/100; break;
	case '/':
		if (second == 0){
			res = 0;
			this->mainlabel->ForeColor = Color::Red;
			MessageBox::Show(this, "Делить на ноль нельзя!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		else
		res = this->first_num / second; break;
	}
	is_ravno = true;
	this->mainlabel->Text = System::Convert::ToString(res);
}
private: System::Void butn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mainlabel->Text = "0";
	this->mainlabel->ForeColor = Color::White;
	this->first_num = 0;
	this->user_action = ' ';
	is_ravno = false;
}

private: System::Void butn_znak_Click_1(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->mainlabel->Text);
	num *= -1;
	this->mainlabel->Text = System::Convert::ToString(num);
}
private: System::Void butn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void butn_tochka_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->mainlabel->Text;
	if(!text->Contains(","))
	this->mainlabel->Text = text + ",";
}
};
}
