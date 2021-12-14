object ArrowSeriesEditor: TArrowSeriesEditor
  Left = 251
  Top = 308
  ActiveControl = BBrush
  ClientHeight = 196
  ClientWidth = 246
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 151
    Top = 48
    Width = 32
    Height = 13
    Alignment = taRightJustify
    Caption = '&Width:'
    FocusControl = SEArrowWidth
  end
  object Label2: TLabel
    Left = 147
    Top = 76
    Width = 35
    Height = 13
    Alignment = taRightJustify
    Caption = '&Height:'
    FocusControl = SEArrowHeight
  end
  object Label3: TLabel
    Left = 28
    Top = 120
    Width = 23
    Height = 13
    Alignment = taRightJustify
    Caption = '&Size:'
    FocusControl = SBPercent
  end
  object LPercent: TLabel
    Left = 185
    Top = 120
    Width = 23
    Height = 13
    Caption = '50%'
  end
  object Label4: TLabel
    Left = 112
    Top = 156
    Width = 70
    Height = 13
    Alignment = taRightJustify
    Caption = '&Transparency:'
    FocusControl = ETransp
  end
  object BPen: TButtonPen
    Left = 4
    Top = 4
    HelpContext = 275
    Caption = '&Border...'
    TabOrder = 0
  end
  object BBrush: TButton
    Left = 152
    Top = 4
    Width = 81
    Height = 25
    HelpContext = 274
    Caption = '&Pattern...'
    TabOrder = 1
    OnClick = BBrushClick
  end
  object SEArrowWidth: TEdit
    Left = 188
    Top = 44
    Width = 30
    Height = 21
    HelpContext = 57
    TabOrder = 2
    Text = '1'
    OnChange = SEArrowWidthChange
  end
  object SEArrowHeight: TEdit
    Left = 188
    Top = 72
    Width = 30
    Height = 21
    HelpContext = 55
    TabOrder = 3
    Text = '1'
    OnChange = SEArrowHeightChange
  end
  object GroupBox1: TGroupBox
    Left = 4
    Top = 36
    Width = 117
    Height = 65
    TabOrder = 4
    object CBColorEach: TCheckBox
      Left = 8
      Top = 12
      Width = 105
      Height = 17
      HelpContext = 164
      Caption = 'Color &Each'
      TabOrder = 0
      OnClick = CBColorEachClick
    end
    object BArrowColor: TButtonColor
      Left = 8
      Top = 32
      HelpContext = 421
      Caption = '&Color...'
      TabOrder = 1
    end
  end
  object UDArrowWidth: TUpDown
    Left = 218
    Top = 44
    Width = 15
    Height = 21
    HelpContext = 57
    Associate = SEArrowWidth
    Min = 1
    Position = 1
    TabOrder = 5
  end
  object UDArrowHeight: TUpDown
    Left = 218
    Top = 72
    Width = 15
    Height = 21
    HelpContext = 55
    Associate = SEArrowHeight
    Min = 1
    Position = 1
    TabOrder = 6
  end
  object SBPercent: TScrollBar
    Left = 55
    Top = 119
    Width = 121
    Height = 16
    PageSize = 0
    TabOrder = 7
    OnChange = SBPercentChange
  end
  object BGradient: TButtonGradient
    Left = 8
    Top = 152
    Caption = '&Gradient...'
    TabOrder = 8
  end
  object ETransp: TEdit
    Left = 188
    Top = 152
    Width = 30
    Height = 21
    HelpContext = 55
    TabOrder = 9
    Text = '1'
    OnChange = ETranspChange
  end
  object UDTransp: TUpDown
    Left = 218
    Top = 152
    Width = 15
    Height = 21
    HelpContext = 55
    Associate = ETransp
    Min = 1
    Position = 1
    TabOrder = 10
  end
end
