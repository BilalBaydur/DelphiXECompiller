object FormTeeShape: TFormTeeShape
  Left = 211
  Top = 233
  Width = 311
  Height = 258
  BorderIcons = [biSystemMenu]
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PC1: TPageControl
    Left = 0
    Top = 0
    Width = 295
    Height = 220
    ActivePage = TabFormat
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PC1Change
    object TabFormat: TTabSheet
      Caption = 'Format'
      object Label4: TLabel
        Left = 9
        Top = 67
        Width = 68
        Height = 13
        Alignment = taRightJustify
        Caption = '&Transparency:'
        FocusControl = EShadowTransp
      end
      object BBackColor: TButtonColor
        Left = 8
        Top = 3
        Width = 85
        HelpContext = 1904
        Caption = '&Color...'
        TabOrder = 0
      end
      object Button6: TButton
        Left = 112
        Top = 3
        Width = 85
        Height = 25
        HelpContext = 118
        Caption = '&Pattern...'
        TabOrder = 1
        OnClick = BBrushClick
      end
      object CBTransparent: TCheckBox
        Left = 8
        Top = 41
        Width = 121
        Height = 17
        HelpContext = 1464
        Caption = '&Transparent'
        TabOrder = 2
        OnClick = CBTransparentClick
      end
      object EShadowTransp: TEdit
        Left = 80
        Top = 64
        Width = 29
        Height = 21
        HelpContext = 430
        TabOrder = 3
        Text = '0'
        OnChange = EShadowTranspChange
      end
      object UDShadowTransp: TUpDown
        Left = 109
        Top = 64
        Width = 15
        Height = 21
        HelpContext = 430
        Associate = EShadowTransp
        TabOrder = 4
      end
    end
    object TabSheet1: TTabSheet
      Caption = 'Border'
      object Label2: TLabel
        Left = 28
        Top = 8
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Bevel:'
        FocusControl = CBBevel
      end
      object Label3: TLabel
        Left = 35
        Top = 36
        Width = 23
        Height = 13
        Alignment = taRightJustify
        Caption = 'Siz&e:'
        FocusControl = EBevWidth
      end
      object CBBevel: TComboFlat
        Left = 64
        Top = 5
        Width = 81
        HelpContext = 1905
        TabOrder = 0
        OnChange = CBBevelChange
        Items.Strings = (
          'None'
          'Lowered'
          'Raised')
      end
      object EBevWidth: TEdit
        Left = 64
        Top = 32
        Width = 29
        Height = 21
        HelpContext = 1906
        TabOrder = 1
        Text = '1'
        OnChange = EBevWidthChange
      end
      object UDBevW: TUpDown
        Left = 93
        Top = 32
        Width = 15
        Height = 21
        HelpContext = 1906
        Associate = EBevWidth
        Min = 1
        Position = 1
        TabOrder = 2
      end
      object GroupBox1: TGroupBox
        Left = 5
        Top = 59
        Width = 145
        Height = 65
        TabOrder = 3
        object Label1: TLabel
          Left = 30
          Top = 39
          Width = 23
          Height = 13
          Alignment = taRightJustify
          Caption = 'Siz&e:'
          FocusControl = ERoundSize
        end
        object CBRound: TCheckBox
          Left = 8
          Top = 12
          Width = 132
          Height = 17
          HelpContext = 1465
          Caption = '&Round Frame'
          TabOrder = 0
          OnClick = CBRoundClick
        end
        object ERoundSize: TEdit
          Left = 59
          Top = 35
          Width = 29
          Height = 21
          HelpContext = 1906
          TabOrder = 1
          Text = '1'
          OnChange = ERoundSizeChange
        end
        object UDRoundSize: TUpDown
          Left = 88
          Top = 35
          Width = 15
          Height = 21
          HelpContext = 1906
          Associate = ERoundSize
          Max = 500
          Position = 1
          TabOrder = 2
        end
      end
      object Button4: TButtonPen
        Left = 160
        Top = 3
        Width = 85
        HelpContext = 221
        Caption = '&Frame...'
        TabOrder = 4
      end
    end
    object TabText: TTabSheet
      Caption = 'Text'
    end
    object TabGradient: TTabSheet
      Caption = 'Gradient'
    end
    object TabShadow: TTabSheet
      Caption = 'Shadow'
    end
    object TabEmboss: TTabSheet
      Caption = 'Emboss'
      ImageIndex = 6
    end
    object TabImage: TTabSheet
      Caption = 'Picture'
    end
  end
end
