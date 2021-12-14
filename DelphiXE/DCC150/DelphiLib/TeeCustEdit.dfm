object CustomSeriesEditor: TCustomSeriesEditor
  Left = 234
  Top = 256
  BorderIcons = [biSystemMenu]
  ClientHeight = 222
  ClientWidth = 363
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 42
    Top = 141
    Width = 30
    Height = 13
    Alignment = taRightJustify
    Caption = 'S&tack:'
    FocusControl = CBStack
  end
  object LHeight: TLabel
    Left = 21
    Top = 113
    Width = 51
    Height = 13
    Alignment = taRightJustify
    Caption = '&Height 3D:'
    FocusControl = EHeight
  end
  object Label2: TLabel
    Left = 18
    Top = 171
    Width = 54
    Height = 13
    Alignment = taRightJustify
    Caption = 'Treat &nulls:'
    FocusControl = CBNulls
  end
  object LTransp: TLabel
    Left = 2
    Top = 195
    Width = 70
    Height = 13
    Alignment = taRightJustify
    Caption = '&Transparency:'
    FocusControl = TBTransp
  end
  object BLineBorder: TButtonPen
    Left = 4
    Top = 9
    HelpContext = 275
    Caption = '&Border...'
    TabOrder = 0
    OnClick = BLineBorderClick
  end
  object BLineColor: TButtonColor
    Left = 4
    Top = 41
    HelpContext = 421
    Caption = '&Color...'
    TabOrder = 1
    OnClick = BLineColorClick
  end
  object GBStair: TGroupBox
    Left = 233
    Top = 8
    Width = 90
    Height = 89
    HelpContext = 438
    Caption = 'Line Mode:'
    TabOrder = 2
    object CBStairs: TCheckBox
      Left = 8
      Top = 16
      Width = 80
      Height = 17
      HelpContext = 438
      Caption = '&Stairs'
      TabOrder = 0
      OnClick = CBStairsClick
    end
    object CBInvStairs: TCheckBox
      Left = 8
      Top = 40
      Width = 80
      Height = 17
      HelpContext = 252
      Caption = '&Inverted'
      TabOrder = 1
      OnClick = CBInvStairsClick
    end
    object CBSmoothed: TCheckBox
      Left = 8
      Top = 64
      Width = 75
      Height = 17
      Caption = 'S&moothed'
      TabOrder = 2
      OnClick = CBSmoothedClick
    end
  end
  object CBColorEach: TCheckBox
    Left = 90
    Top = 44
    Width = 127
    Height = 17
    HelpContext = 164
    Caption = 'Color &Each'
    TabOrder = 3
    OnClick = CBColorEachClick
  end
  object CBDark3D: TCheckBox
    Left = 90
    Top = 13
    Width = 127
    Height = 17
    HelpContext = 176
    Caption = '&Dark 3D'
    TabOrder = 4
    OnClick = CBDark3DClick
  end
  object CBStack: TComboFlat
    Left = 82
    Top = 138
    Width = 121
    HelpContext = 1470
    TabOrder = 5
    OnChange = CBStackChange
    Items.Strings = (
      'None'
      'Overlap'
      'Stack'
      'Stack 100%')
  end
  object EHeight: TEdit
    Left = 82
    Top = 109
    Width = 27
    Height = 21
    HelpContext = 856
    TabOrder = 6
    Text = '0'
    OnChange = EHeightChange
  end
  object UDHeight: TUpDown
    Left = 109
    Top = 109
    Width = 15
    Height = 21
    HelpContext = 856
    Associate = EHeight
    TabOrder = 7
  end
  object CBClick: TCheckBox
    Left = 90
    Top = 77
    Width = 127
    Height = 17
    HelpContext = 1300
    Caption = 'Clic&kable'
    TabOrder = 8
    OnClick = CBClickClick
  end
  object BBrush: TButton
    Left = 4
    Top = 73
    Width = 75
    Height = 25
    HelpContext = 274
    Caption = '&Pattern...'
    TabOrder = 9
    OnClick = BBrushClick
  end
  object BOutline: TButtonPen
    Left = 233
    Top = 105
    Width = 89
    HelpContext = 1740
    Caption = '&Outline...'
    TabOrder = 10
  end
  object CheckBox1: TCheckBox
    Left = 134
    Top = 111
    Width = 94
    Height = 17
    HelpContext = 1300
    Caption = 'Color Each line'
    TabOrder = 11
    OnClick = CheckBox1Click
  end
  object Button1: TButton
    Left = 233
    Top = 136
    Width = 89
    Height = 25
    Caption = 'S&hadow...'
    TabOrder = 12
    OnClick = Button1Click
  end
  object BGradient: TButtonGradient
    Left = 234
    Top = 197
    Width = 89
    Caption = '&Gradient...'
    TabOrder = 13
  end
  object CBNulls: TComboFlat
    Left = 82
    Top = 167
    Width = 121
    ItemIndex = 0
    TabOrder = 14
    Text = 'Dont Paint'
    OnChange = CBNullsChange
    Items.Strings = (
      'Dont Paint'
      'Skip'
      'Ignore')
  end
  object TBTransp: TTrackBar
    Left = 77
    Top = 195
    Width = 89
    Height = 21
    Max = 100
    Frequency = 10
    TabOrder = 15
    ThumbLength = 12
    OnChange = TBTranspChange
  end
  object BEmboss: TButton
    Left = 234
    Top = 166
    Width = 87
    Height = 25
    Caption = '&Emboss...'
    TabOrder = 16
    OnClick = BEmbossClick
  end
end
