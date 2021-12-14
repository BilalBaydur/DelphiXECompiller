object SymbolEditor: TSymbolEditor
  Left = 154
  Top = 199
  AutoScroll = False
  Caption = 'Legend Symbol Editor'
  ClientHeight = 175
  ClientWidth = 313
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object L11: TLabel
    Left = 170
    Top = 9
    Width = 31
    Height = 13
    Alignment = taRightJustify
    Caption = '&Width:'
    FocusControl = SEColWi
  end
  object Label2: TLabel
    Left = 143
    Top = 38
    Width = 58
    Height = 13
    Alignment = taRightJustify
    Caption = 'Width &Units:'
    FocusControl = CBColWUnits
  end
  object Label3: TLabel
    Left = 161
    Top = 65
    Width = 40
    Height = 13
    Alignment = taRightJustify
    Caption = '&Position:'
    FocusControl = CBSymbolPos
  end
  object SEColWi: TEdit
    Left = 203
    Top = 6
    Width = 33
    Height = 21
    HelpContext = 1298
    TabOrder = 0
    Text = '0'
    OnChange = SEColWiChange
  end
  object UDColWi: TUpDown
    Left = 236
    Top = 6
    Width = 15
    Height = 21
    HelpContext = 1298
    Associate = SEColWi
    Increment = 5
    TabOrder = 1
  end
  object CBColWUnits: TComboFlat
    Left = 203
    Top = 34
    Width = 93
    HelpContext = 1299
    TabOrder = 2
    OnChange = CBColWUnitsChange
    Items.Strings = (
      'Percent'
      'Pixels')
  end
  object CBSymbolPos: TComboFlat
    Left = 203
    Top = 61
    Width = 93
    HelpContext = 1297
    TabOrder = 3
    OnChange = CBSymbolPosChange
    Items.Strings = (
      'Left'
      'Right')
  end
  object CBContinuous: TCheckBox
    Left = 7
    Top = 32
    Width = 122
    Height = 17
    HelpContext = 1296
    Caption = '&Continuous'
    TabOrder = 4
    OnClick = CBContinuousClick
  end
  object CBVisible: TCheckBox
    Left = 7
    Top = 8
    Width = 118
    Height = 17
    HelpContext = 1912
    Caption = '&Visible'
    TabOrder = 5
    OnClick = CBVisibleClick
  end
  object CBSymPen: TCheckBox
    Left = 47
    Top = 146
    Width = 123
    Height = 10
    HelpContext = 1911
    Caption = '&Default border'
    TabOrder = 6
    OnClick = CBSymPenClick
  end
  object BSymPen: TButtonPen
    Left = 7
    Top = 115
    Width = 90
    Caption = '&Border...'
    TabOrder = 7
  end
  object CBSquared: TCheckBox
    Left = 7
    Top = 56
    Width = 122
    Height = 17
    HelpContext = 1913
    Caption = '&Squared'
    TabOrder = 8
    OnClick = CBSquaredClick
  end
  object BSymGradient: TButtonGradient
    Left = 7
    Top = 83
    Width = 89
    Caption = '&Gradient...'
    TabOrder = 9
  end
  object Button1: TButton
    Left = 202
    Top = 88
    Width = 92
    Height = 25
    Caption = 'S&hadow...'
    TabOrder = 10
    OnClick = Button1Click
  end
  object BEmboss: TButton
    Left = 203
    Top = 119
    Width = 91
    Height = 25
    Caption = '&Emboss...'
    TabOrder = 11
    OnClick = BEmbossClick
  end
end
