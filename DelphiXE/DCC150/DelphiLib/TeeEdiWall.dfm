object FormTeeWall: TFormTeeWall
  Left = 200
  Top = 102
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 352
  ClientWidth = 300
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object TabSubWalls: TTabControl
    Left = 0
    Top = 36
    Width = 300
    Height = 316
    HelpContext = 347
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = TabSubWallsChange
    object L33: TLabel
      Left = 213
      Top = 168
      Width = 23
      Height = 13
      Alignment = taRightJustify
      Caption = 'Siz&e:'
      FocusControl = SEWallSize
    end
    object Label1: TLabel
      Left = 168
      Top = 198
      Width = 68
      Height = 13
      Alignment = taRightJustify
      Caption = 'T&ransparency:'
      FocusControl = Edit1
    end
    object BWallColor: TButtonColor
      Left = 10
      Top = 27
      Width = 94
      HelpContext = 162
      Caption = '&Color...'
      TabOrder = 0
    end
    object BWallPen: TButtonPen
      Left = 10
      Top = 59
      Width = 94
      HelpContext = 377
      Caption = 'B&order...'
      TabOrder = 1
    end
    object BWallBrush: TButton
      Left = 10
      Top = 91
      Width = 94
      Height = 25
      HelpContext = 116
      Caption = '&Pattern...'
      TabOrder = 2
      OnClick = BWallBrushClick
    end
    object SEWallSize: TEdit
      Left = 241
      Top = 165
      Width = 29
      Height = 21
      HelpContext = 115
      TabOrder = 3
      Text = '0'
      OnChange = SEWallSizeChange
    end
    object CBTransp: TCheckBox
      Left = 120
      Top = 127
      Width = 120
      Height = 17
      HelpContext = 779
      Caption = '&Transparent'
      TabOrder = 4
      OnClick = CBTranspClick
    end
    object UDWallSize: TUpDown
      Left = 270
      Top = 165
      Width = 15
      Height = 21
      HelpContext = 115
      Associate = SEWallSize
      TabOrder = 5
    end
    object CBDark3D: TCheckBox
      Left = 120
      Top = 63
      Width = 120
      Height = 17
      HelpContext = 176
      Caption = '&Dark 3D'
      TabOrder = 6
      OnClick = CBDark3DClick
    end
    object BGradient: TButtonGradient
      Left = 10
      Top = 123
      Width = 94
      HelpContext = 508
      Caption = '&Gradient...'
      TabOrder = 7
      OnClick = BGradientClick
    end
    object CBVisible: TCheckBox
      Left = 120
      Top = 31
      Width = 120
      Height = 17
      HelpContext = 1469
      Caption = 'V&isible'
      TabOrder = 8
      OnClick = CBVisibleClick
    end
    object Edit1: TEdit
      Left = 241
      Top = 195
      Width = 29
      Height = 21
      HelpContext = 779
      TabOrder = 9
      Text = '0'
      OnChange = Edit1Change
    end
    object UDTransp: TUpDown
      Left = 270
      Top = 195
      Width = 15
      Height = 21
      HelpContext = 779
      Associate = Edit1
      TabOrder = 10
    end
    object CBAutoHide: TCheckBox
      Left = 120
      Top = 96
      Width = 120
      Height = 17
      Caption = '&Auto Hide'
      TabOrder = 11
      OnClick = CBAutoHideClick
    end
    object GroupBox1: TGroupBox
      Left = 12
      Top = 160
      Width = 123
      Height = 70
      Caption = 'Position:'
      TabOrder = 12
      object Label3: TLabel
        Left = 37
        Top = 18
        Width = 25
        Height = 13
        Alignment = taRightJustify
        Caption = 'Start:'
        FocusControl = Edit2
      end
      object Label4: TLabel
        Left = 40
        Top = 42
        Width = 22
        Height = 13
        Alignment = taRightJustify
        Caption = 'End:'
        FocusControl = Edit3
      end
      object Edit2: TEdit
        Left = 67
        Top = 15
        Width = 29
        Height = 21
        HelpContext = 779
        TabOrder = 0
        Text = '0'
        OnChange = Edit2Change
      end
      object UDStart: TUpDown
        Left = 96
        Top = 15
        Width = 15
        Height = 21
        HelpContext = 779
        Associate = Edit2
        TabOrder = 1
      end
      object Edit3: TEdit
        Left = 67
        Top = 39
        Width = 29
        Height = 21
        HelpContext = 779
        TabOrder = 2
        Text = '0'
        OnChange = Edit3Change
      end
      object UDEnd: TUpDown
        Left = 96
        Top = 39
        Width = 15
        Height = 21
        HelpContext = 779
        Associate = Edit3
        TabOrder = 3
      end
    end
    object BImage: TButton
      Left = 10
      Top = 240
      Width = 94
      Height = 25
      Caption = '&Image...'
      TabOrder = 13
      OnClick = BImageClick
    end
    object BShadow: TButton
      Left = 187
      Top = 240
      Width = 97
      Height = 25
      Caption = '&Shadow...'
      TabOrder = 14
      Visible = False
      OnClick = BShadowClick
    end
    object BVisual: TButton
      Left = 10
      Top = 272
      Width = 94
      Height = 25
      Caption = 'Visua&l...'
      TabOrder = 15
      OnClick = BVisualClick
    end
    object BEmboss: TButton
      Left = 187
      Top = 271
      Width = 97
      Height = 25
      Caption = '&Emboss...'
      TabOrder = 16
      OnClick = BEmbossClick
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 300
    Height = 36
    Align = alTop
    TabOrder = 1
    object Label2: TLabel
      Left = 183
      Top = 10
      Width = 23
      Height = 13
      Alignment = taRightJustify
      Caption = 'Size:'
      FocusControl = EAllSize
    end
    object CBView3dWalls: TCheckBox
      Left = 12
      Top = 9
      Width = 141
      Height = 17
      HelpContext = 676
      Caption = '&Visible Walls'
      TabOrder = 0
      OnClick = CBView3dWallsClick
    end
    object EAllSize: TEdit
      Left = 211
      Top = 7
      Width = 29
      Height = 21
      HelpContext = 115
      TabOrder = 1
      Text = '0'
      OnChange = EAllSizeChange
    end
    object UDAllSize: TUpDown
      Left = 240
      Top = 7
      Width = 16
      Height = 21
      HelpContext = 115
      Associate = EAllSize
      TabOrder = 2
    end
  end
end
