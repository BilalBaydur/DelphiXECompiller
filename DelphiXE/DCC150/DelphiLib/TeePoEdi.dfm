object SeriesPointerEditor: TSeriesPointerEditor
  Left = 251
  Top = 197
  Width = 317
  Height = 299
  BorderIcons = [biSystemMenu]
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PanelBottom: TPanel
    Left = 0
    Top = 224
    Width = 301
    Height = 37
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
    Visible = False
    object Panel1: TPanel
      Left = 215
      Top = 0
      Width = 86
      Height = 37
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 0
      object Button1: TButton
        Left = 6
        Top = 7
        Width = 75
        Height = 25
        Caption = 'Close'
        TabOrder = 0
        OnClick = Button1Click
      end
    end
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 301
    Height = 224
    ActivePage = TabStyle
    Align = alClient
    TabOrder = 1
    object TabStyle: TTabSheet
      Caption = 'Style'
      object Label3: TLabel
        Left = 136
        Top = 8
        Width = 26
        Height = 13
        Alignment = taRightJustify
        Caption = '&Style:'
        FocusControl = CBStyle
      end
      object LTransp: TLabel
        Left = 12
        Top = 112
        Width = 68
        Height = 13
        Alignment = taRightJustify
        Caption = '&Transparency:'
        FocusControl = TBTransp
      end
      object CBDrawPoint: TCheckBox
        Left = 8
        Top = 7
        Width = 65
        Height = 17
        HelpContext = 683
        Caption = '&Visible'
        TabOrder = 0
        OnClick = CBDrawPointClick
      end
      object CB3dPoint: TCheckBox
        Left = 8
        Top = 31
        Width = 65
        Height = 17
        HelpContext = 190
        Caption = '&3D'
        TabOrder = 1
        OnClick = CB3dPointClick
      end
      object CBStyle: TComboFlat
        Left = 168
        Top = 5
        Width = 117
        HelpContext = 448
        Style = csOwnerDrawFixed
        DropDownCount = 12
        ItemHeight = 15
        TabOrder = 2
        OnChange = CBStyleChange
        OnDrawItem = CBStyleDrawItem
        Items.Strings = (
          'Square'
          'Circle'
          'Triangle'
          'Down Triangle'
          'Cross'
          'Diagonal Cross'
          'Star'
          'Diamond'
          'Small Dot'
          'Nothing'
          'Left Triangle'
          'Right Triangle'
          'Hexagon'
          'Visual')
      end
      object CBPoDark: TCheckBox
        Left = 80
        Top = 31
        Width = 121
        Height = 17
        HelpContext = 1471
        Caption = 'Dar&k 3D'
        TabOrder = 3
        OnClick = CBPoDarkClick
      end
      object CBColorEach: TCheckBox
        Left = 10
        Top = 63
        Width = 105
        Height = 17
        HelpContext = 164
        Caption = '&Color Each '
        TabOrder = 4
        OnClick = CBColorEachClick
      end
      object CBIgnoreNulls: TCheckBox
        Left = 10
        Top = 84
        Width = 127
        Height = 17
        Caption = '&Ignore nulls'
        TabOrder = 5
        OnClick = CBIgnoreNullsClick
      end
      object BGradient: TButton
        Left = 193
        Top = 63
        Width = 94
        Height = 25
        HelpContext = 1841
        Caption = '&Gradient...'
        TabOrder = 6
        OnClick = BGradientClick
      end
      object Button2: TButton
        Left = 193
        Top = 94
        Width = 94
        Height = 25
        Caption = 'Sh&adow...'
        TabOrder = 7
        OnClick = Button2Click
      end
      object TBTransp: TTrackBar
        Left = 80
        Top = 112
        Width = 89
        Height = 21
        Max = 100
        Frequency = 10
        TabOrder = 8
        ThumbLength = 12
        OnChange = TBTranspChange
      end
      object GroupBox1: TGroupBox
        Left = 8
        Top = 152
        Width = 285
        Height = 45
        TabOrder = 9
        object BPointFillColor: TButton
          Left = 7
          Top = 12
          Width = 75
          Height = 25
          HelpContext = 117
          Caption = '&Pattern...'
          TabOrder = 0
          OnClick = BPointFillColorClick
        end
        object CBDefBrushColor: TCheckBox
          Left = 191
          Top = 16
          Width = 88
          Height = 17
          HelpContext = 1910
          Caption = '&Default'
          TabOrder = 1
          OnClick = CBDefBrushColorClick
        end
        object BPoinPenCol: TButtonPen
          Left = 97
          Top = 12
          HelpContext = 379
          Caption = 'B&order...'
          TabOrder = 2
          OnClick = BPoinPenColClick
        end
      end
      object BEmboss: TButton
        Left = 193
        Top = 125
        Width = 94
        Height = 25
        Caption = '&Emboss...'
        TabOrder = 10
        OnClick = BEmbossClick
      end
    end
    object TabSize: TTabSheet
      Caption = 'Size'
      ImageIndex = 1
      object Label1: TLabel
        Left = 39
        Top = 18
        Width = 31
        Height = 13
        Alignment = taRightJustify
        Caption = '&Width:'
        FocusControl = SEPointHorizSize
      end
      object Label2: TLabel
        Left = 36
        Top = 46
        Width = 34
        Height = 13
        Alignment = taRightJustify
        Caption = '&Height:'
        FocusControl = SEPointVertSize
      end
      object Label4: TLabel
        Left = 38
        Top = 74
        Width = 32
        Height = 13
        Alignment = taRightJustify
        Caption = '&Depth:'
        FocusControl = SEPointDepth
      end
      object SEPointHorizSize: TEdit
        Left = 73
        Top = 14
        Width = 36
        Height = 21
        HelpContext = 245
        TabOrder = 0
        Text = '1'
        OnChange = SEPointHorizSizeChange
      end
      object SEPointVertSize: TEdit
        Left = 73
        Top = 42
        Width = 36
        Height = 21
        HelpContext = 674
        TabOrder = 1
        Text = '1'
        OnChange = SEPointVertSizeChange
      end
      object UDPointHorizSize: TUpDown
        Left = 109
        Top = 14
        Width = 15
        Height = 21
        HelpContext = 245
        Associate = SEPointHorizSize
        Min = 1
        Max = 1000
        Position = 1
        TabOrder = 2
      end
      object UDPointVertSize: TUpDown
        Left = 109
        Top = 42
        Width = 15
        Height = 21
        HelpContext = 674
        Associate = SEPointVertSize
        Min = 1
        Max = 1000
        Position = 1
        TabOrder = 3
      end
      object SEPointDepth: TEdit
        Left = 73
        Top = 70
        Width = 36
        Height = 21
        HelpContext = 245
        TabOrder = 4
        Text = '0'
        OnChange = SEPointDepthChange
      end
      object UDPointDepth: TUpDown
        Left = 109
        Top = 70
        Width = 15
        Height = 21
        HelpContext = 245
        Associate = SEPointDepth
        Max = 1000
        TabOrder = 5
      end
      object CBInflate: TCheckBox
        Left = 72
        Top = 111
        Width = 144
        Height = 17
        HelpContext = 249
        Caption = 'Inflate &Margins'
        TabOrder = 6
        OnClick = CBInflateClick
      end
    end
  end
end
