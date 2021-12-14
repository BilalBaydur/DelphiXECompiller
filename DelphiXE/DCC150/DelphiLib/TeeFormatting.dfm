object FormatEditor: TFormatEditor
  Left = 192
  Top = 107
  BorderStyle = bsDialog
  Caption = 'Numeric Format'
  ClientHeight = 269
  ClientWidth = 274
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PanelOK: TPanel
    Left = 0
    Top = 228
    Width = 274
    Height = 41
    Align = alBottom
    TabOrder = 0
    object Button1: TButton
      Left = 96
      Top = 8
      Width = 75
      Height = 25
      Caption = 'OK'
      Default = True
      ModalResult = 1
      TabOrder = 0
    end
    object Button2: TButton
      Left = 187
      Top = 8
      Width = 75
      Height = 25
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 1
    end
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 132
    Width = 274
    Height = 96
    Align = alClient
    TabOrder = 1
    object CBCustom: TComboFlat
      Left = 120
      Top = 64
      Width = 145
      Style = csDropDown
      Enabled = False
      TabOrder = 0
      OnChange = CBCustomChange
    end
    object CBDate: TComboFlat
      Left = 120
      Top = 14
      Width = 145
      Style = csDropDown
      Enabled = False
      TabOrder = 1
      OnChange = CBDateChange
      Items.Strings = (
        'mm-yyyy'
        'mm-dd-yy'
        'dd-mm-yyyy'
        'mmm'
        'ddd'
        'MM')
    end
    object RBDate: TRadioButton
      Left = 8
      Top = 17
      Width = 111
      Height = 17
      Caption = '&Date Time:'
      TabOrder = 2
      OnClick = RadioGroup1Click
    end
    object RBCustom: TRadioButton
      Left = 8
      Top = 67
      Width = 111
      Height = 17
      Caption = '&Custom:'
      TabOrder = 3
      OnClick = RadioGroup1Click
    end
    object RBGeo: TRadioButton
      Left = 8
      Top = 42
      Width = 111
      Height = 17
      Caption = '&Geographic:'
      TabOrder = 4
      OnClick = RadioGroup1Click
    end
    object CBGeo: TComboFlat
      Left = 120
      Top = 39
      Width = 145
      Style = csDropDown
      Enabled = False
      TabOrder = 5
      OnChange = CBGeoChange
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 274
    Height = 132
    Align = alTop
    TabOrder = 2
    object Label1: TLabel
      Left = 64
      Top = 22
      Width = 46
      Height = 13
      Alignment = taRightJustify
      Caption = 'D&ecimals:'
      FocusControl = Edit1
    end
    object Label2: TLabel
      Left = 82
      Top = 46
      Width = 28
      Height = 13
      Alignment = taRightJustify
      Caption = '&Fixed:'
      FocusControl = Edit2
    end
    object RBInteger: TRadioButton
      Left = 8
      Top = 5
      Width = 113
      Height = 17
      Caption = '&Number'
      TabOrder = 0
      OnClick = RBIntegerClick
    end
    object CBPercent: TCheckBox
      Left = 117
      Top = 88
      Width = 123
      Height = 17
      Caption = '&Percent'
      TabOrder = 1
      OnClick = CBPercentClick
    end
    object CBThousands: TCheckBox
      Left = 117
      Top = 70
      Width = 123
      Height = 17
      Caption = '&Thousands'
      TabOrder = 2
      OnClick = CBThousandsClick
    end
    object CBCurrency: TCheckBox
      Left = 117
      Top = 106
      Width = 123
      Height = 17
      Caption = 'C&urrency'
      TabOrder = 3
      OnClick = CBThousandsClick
    end
    object CBFixedDecimals: TCheckBox
      Left = 174
      Top = 22
      Width = 97
      Height = 17
      Caption = 'F&ixed'
      TabOrder = 4
    end
    object UpDown1: TUpDown
      Left = 150
      Top = 18
      Width = 15
      Height = 21
      Associate = Edit1
      Max = 20
      TabOrder = 5
    end
    object Edit1: TEdit
      Left = 117
      Top = 18
      Width = 33
      Height = 21
      TabOrder = 6
      Text = '0'
    end
    object Edit2: TEdit
      Left = 117
      Top = 42
      Width = 33
      Height = 21
      TabOrder = 7
      Text = '0'
    end
    object UpDown2: TUpDown
      Left = 150
      Top = 42
      Width = 15
      Height = 21
      Associate = Edit2
      Max = 20
      TabOrder = 8
    end
  end
end
