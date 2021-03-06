/******************************************************************************************************************
***** Authors: Lord
***** Date of creation: 03.05.2018
***** Description: File of impelmentation of Level Editor Application
***** Copyright: GSC, OxyGen Team 2018 (C)
******************************************************************************************************************/

#pragma once

namespace OxySDK
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LE_Form : public System::Windows::Forms::Form
	{
	public:
		LE_Form(void)
		{
			InitializeComponent();
		}

	protected:
		~LE_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  projectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  somethingElseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  somethingElse2ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Panel^  RenderPanel;
	private: System::Windows::Forms::Panel^  panel1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->projectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->somethingElseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->somethingElse2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->RenderPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			//
			// menuStrip1
			//
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->projectToolStripMenuItem,
					this->somethingElseToolStripMenuItem, this->somethingElse2ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1028, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			//
			// projectToolStripMenuItem
			//
			this->projectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newFileToolStripMenuItem,
					this->settingsToolStripMenuItem, this->quitToolStripMenuItem
			});
			this->projectToolStripMenuItem->Name = L"projectToolStripMenuItem";
			this->projectToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->projectToolStripMenuItem->Text = L"Project";
			//
			// newFileToolStripMenuItem
			//
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			this->newFileToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->newFileToolStripMenuItem->Text = L"New File";
			//
			// settingsToolStripMenuItem
			//
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			//
			// quitToolStripMenuItem
			//
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			//
			// somethingElseToolStripMenuItem
			//
			this->somethingElseToolStripMenuItem->Name = L"somethingElseToolStripMenuItem";
			this->somethingElseToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->somethingElseToolStripMenuItem->Text = L"Something else";
			//
			// somethingElse2ToolStripMenuItem
			//
			this->somethingElse2ToolStripMenuItem->Name = L"somethingElse2ToolStripMenuItem";
			this->somethingElse2ToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->somethingElse2ToolStripMenuItem->Text = L"Something else 2";
			//
			// statusStrip1
			//
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 653);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1028, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			//
			// toolStripStatusLabel1
			//
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";

			//
			// RenderPanel
			//
			this->RenderPanel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->RenderPanel->Location = System::Drawing::Point(12, 41);
			this->RenderPanel->Name = L"RenderPanel";
			this->RenderPanel->Size = System::Drawing::Size(743, 594);
			this->RenderPanel->TabIndex = 2;
			//
			// panel1
			//
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(795, 400);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 3;
			//
			// LE_Form
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 675);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->RenderPanel);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LE_Form";
			this->Text = L"LE_Form";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	};
}
