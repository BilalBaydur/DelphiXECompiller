object BMPOptions: TBMPOptions
  Left = 275
  Top = 188
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 216
  ClientWidth = 202
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 39
    Top = 8
    Width = 32
    Height = 13
    Caption = '&Colors:'
    FocusControl = CBColors
  end
  object Label2: TLabel
    Left = 100
    Top = 63
    Width = 21
    Height = 13
    Alignment = taRightJustify
    Caption = '&DPI:'
    FocusControl = EDpi
  end
  object CBMono: TCheckBox
    Left = 15
    Top = 32
    Width = 154
    Height = 17
    HelpContext = 1802
    Caption = '&Monochrome'
    TabOrder = 0
    OnClick = CBMonoClick
  end
  object CBColors: TComboFlat
    Left = 79
    Top = 5
    Width = 102
    HelpContext = 1803
    TabOrder = 1
    OnChange = CBColorsChange
    Items.Strings = (
      'Default'
      '2 (1 bit)'
      '16 (4 bit)'
      '256 (8 bit)'
      '32768 (15 bit)'
      '65536 (16 bit)'
      '16M (24 bit)'
      '16M (32 bit)')
  end
  object Button1: TButton
    Left = 16
    Top = 56
    Width = 75
    Height = 25
    Caption = '&Filters...'
    TabOrder = 2
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 90
    Width = 169
    Height = 113
    Caption = 'Preview:'
    TabOrder = 3
    object ImageFiltered1: TImageFiltered
      Left = 8
      Top = 16
      Width = 153
      Height = 89
      Stretch = True
    end
  end
  object UDDpi: TUpDown
    Left = 164
    Top = 60
    Width = 15
    Height = 21
    HelpContext = 1891
    Associate = EDpi
    Max = 3000
    TabOrder = 4
  end
  object EDpi: TEdit
    Left = 123
    Top = 60
    Width = 41
    Height = 21
    HelpContext = 1891
    TabOrder = 5
    Text = '0'
  end
end
