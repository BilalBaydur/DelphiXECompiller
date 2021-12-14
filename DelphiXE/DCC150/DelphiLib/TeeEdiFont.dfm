object TeeFontEditor: TTeeFontEditor
  Left = 386
  Top = 176
  Width = 298
  Height = 291
  Caption = 'TeeFont Editor'
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PanelButtons: TPanel
    Left = 0
    Top = 212
    Width = 282
    Height = 41
    Align = alBottom
    TabOrder = 0
    Visible = False
    object Button1: TButton
      Left = 104
      Top = 8
      Width = 75
      Height = 25
      Caption = 'OK'
      Default = True
      ModalResult = 1
      TabOrder = 0
    end
    object Button2: TButton
      Left = 192
      Top = 8
      Width = 75
      Height = 25
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 282
    Height = 212
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 1
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = 'Font'
      object Label1: TLabel
        Left = 52
        Top = 11
        Width = 23
        Height = 13
        Alignment = taRightJustify
        Caption = '&Size:'
        FocusControl = ESize
      end
      object Label3: TLabel
        Left = 145
        Top = 80
        Width = 31
        Height = 13
        Caption = '&Name:'
        FocusControl = CBName
      end
      object Button3: TButton
        Left = 149
        Top = 44
        Width = 75
        Height = 25
        HelpContext = 213
        Caption = '&Edit...'
        TabOrder = 0
        OnClick = BFontClick
      end
      object ESize: TEdit
        Left = 79
        Top = 7
        Width = 34
        Height = 21
        HelpContext = 1458
        TabOrder = 1
        Text = '1'
        OnChange = ESizeChange
      end
      object UDSize: TUpDown
        Left = 113
        Top = 7
        Width = 15
        Height = 21
        HelpContext = 1458
        Associate = ESize
        Min = 1
        Max = 1500
        Position = 1
        TabOrder = 2
      end
      object GroupBox1: TGroupBox
        Left = 5
        Top = 36
        Width = 129
        Height = 99
        Caption = 'Style:'
        TabOrder = 3
        object CBItalic: TCheckBox
          Left = 8
          Top = 17
          Width = 113
          Height = 17
          Caption = '&Italic'
          TabOrder = 0
          OnClick = CBItalicClick
        end
        object CBBold: TCheckBox
          Left = 8
          Top = 36
          Width = 113
          Height = 17
          Caption = '&Bold'
          TabOrder = 1
          OnClick = CBBoldClick
        end
        object CBStrike: TCheckBox
          Left = 8
          Top = 55
          Width = 113
          Height = 17
          Caption = 'Strikeout'
          TabOrder = 2
          OnClick = CBStrikeClick
        end
        object CBUnder: TCheckBox
          Left = 8
          Top = 74
          Width = 113
          Height = 17
          Caption = '&Underline'
          TabOrder = 3
          OnClick = CBUnderClick
        end
      end
      object BColor: TButtonColor
        Left = 149
        Top = 6
        Caption = '&Color...'
        TabOrder = 4
      end
      object CBName: TComboFlat
        Left = 145
        Top = 96
        Width = 115
        DropDownCount = 15
        Sorted = True
        TabOrder = 5
        OnChange = CBNameChange
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Options'
      object Label2: TLabel
        Left = 25
        Top = 71
        Width = 88
        Height = 13
        Alignment = taRightJustify
        Caption = '&Inter-char spacing:'
        FocusControl = EInter
      end
      object Label4: TLabel
        Left = 8
        Top = 104
        Width = 35
        Height = 13
        Caption = '&Quality:'
        FocusControl = CBQuality
      end
      object EInter: TEdit
        Left = 119
        Top = 67
        Width = 34
        Height = 21
        HelpContext = 1458
        TabOrder = 0
        Text = '0'
        OnChange = EInterChange
      end
      object UDInter: TUpDown
        Left = 153
        Top = 67
        Width = 15
        Height = 21
        HelpContext = 1458
        Associate = EInter
        Min = -100
        TabOrder = 1
      end
      object BOutline: TButtonPen
        Left = 8
        Top = 6
        Width = 94
        HelpContext = 1457
        Caption = '&Outline...'
        TabOrder = 2
      end
      object CBOutGrad: TCheckBox
        Left = 9
        Top = 40
        Width = 185
        Height = 17
        HelpContext = 1833
        Caption = 'O&utline gradient'
        TabOrder = 3
        OnClick = CBOutGradClick
      end
      object CBQuality: TComboFlat
        Left = 8
        Top = 120
        Width = 145
        TabOrder = 4
        OnChange = CBQualityChange
        Items.Strings = (
          'Best'
          'Normal'
          'Default')
      end
    end
    object TabShadow: TTabSheet
      Caption = 'Shadow'
    end
    object TabEmboss: TTabSheet
      Caption = 'Emboss'
      ImageIndex = 5
    end
    object TabGradient: TTabSheet
      Caption = 'Gradient'
    end
    object TabPicture: TTabSheet
      Caption = 'Picture'
      ImageIndex = 4
    end
  end
end
