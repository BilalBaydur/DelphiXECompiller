object FormTeePanel: TFormTeePanel
  Left = 326
  Top = 245
  Width = 359
  Height = 236
  ActiveControl = PageControl1
  BorderIcons = [biSystemMenu]
  Caption = 'Panel Editor'
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 343
    Height = 198
    ActivePage = TabBack
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageControl1Change
    object TabBack: TTabSheet
      Caption = 'Color'
      object BPanelColor: TButtonColor
        Left = 10
        Top = 8
        HelpContext = 1468
        Caption = '&Color...'
        TabOrder = 0
        OnClick = BPanelColorClick
      end
      object CBColorDef: TCheckBox
        Left = 10
        Top = 42
        Width = 90
        Height = 17
        HelpContext = 1468
        Caption = '&Default'
        TabOrder = 1
        OnClick = CBColorDefClick
      end
      object CBImageInside: TCheckBox
        Left = 10
        Top = 83
        Width = 189
        Height = 17
        HelpContext = 90
        Caption = 'Back Image I&nside'
        TabOrder = 2
        OnClick = CBImageInsideClick
      end
    end
    object TabBorders: TTabSheet
      Caption = 'Borders'
      object L19: TLabel
        Left = 84
        Top = 90
        Width = 54
        Height = 13
        Alignment = taRightJustify
        Caption = '&Separation:'
        FocusControl = SEPanelBor
      end
      object L2: TLabel
        Left = 109
        Top = 62
        Width = 31
        Height = 13
        Alignment = taRightJustify
        Caption = 'Widt&h:'
        FocusControl = SEPanelWi
      end
      object Label1: TLabel
        Left = 219
        Top = 48
        Width = 68
        Height = 13
        Caption = '&Round border:'
        FocusControl = ERound
      end
      object Label2: TLabel
        Left = 29
        Top = 11
        Width = 56
        Height = 13
        Alignment = taRightJustify
        Caption = 'Bevel &inner:'
        FocusControl = CBInner
      end
      object Label3: TLabel
        Left = 28
        Top = 35
        Width = 57
        Height = 13
        Alignment = taRightJustify
        Caption = 'Bevel &outer:'
        FocusControl = CBOuter
      end
      object SEPanelBor: TEdit
        Left = 143
        Top = 87
        Width = 30
        Height = 21
        HelpContext = 1468
        TabOrder = 0
        Text = '0'
        OnChange = SEPanelBorChange
      end
      object SEPanelWi: TEdit
        Left = 143
        Top = 59
        Width = 30
        Height = 21
        HelpContext = 103
        TabOrder = 1
        Text = '1'
        OnChange = SEPanelWiChange
      end
      object UDPanelWi: TUpDown
        Left = 173
        Top = 59
        Width = 15
        Height = 21
        HelpContext = 1468
        Associate = SEPanelWi
        Min = 1
        Position = 1
        TabOrder = 2
      end
      object UDPanelBor: TUpDown
        Left = 173
        Top = 87
        Width = 15
        Height = 21
        HelpContext = 1468
        Associate = SEPanelBor
        TabOrder = 3
      end
      object ERound: TEdit
        Left = 218
        Top = 65
        Width = 45
        Height = 21
        HelpContext = 1931
        TabOrder = 4
        Text = '0'
        OnChange = ERoundChange
      end
      object UDRound: TUpDown
        Left = 263
        Top = 65
        Width = 15
        Height = 21
        HelpContext = 1931
        Associate = ERound
        Max = 10000
        TabOrder = 5
      end
      object CBInner: TComboFlat
        Left = 86
        Top = 8
        Width = 105
        HelpContext = 1929
        TabOrder = 6
        OnChange = CBInnerChange
        Items.Strings = (
          'None'
          'Lowered'
          'Raised')
      end
      object CBOuter: TComboFlat
        Left = 86
        Top = 32
        Width = 105
        HelpContext = 1930
        TabOrder = 7
        OnChange = CBOuterChange
        Items.Strings = (
          'None'
          'Lowered'
          'Raised')
      end
      object BBorder: TButtonPen
        Left = 218
        Top = 15
        HelpContext = 2107
        Caption = '&Border...'
        TabOrder = 8
      end
    end
    object TabMargins: TTabSheet
      Caption = 'Margins'
      ImageIndex = 5
      object GBMargins: TGroupBox
        Left = 4
        Top = 2
        Width = 129
        Height = 129
        HelpContext = 11
        TabOrder = 0
        object Label5: TLabel
          Left = 8
          Top = 8
          Width = 27
          Height = 13
          Caption = '&Units:'
          FocusControl = CBMarUnits
        end
        object SETopMa: TEdit
          Left = 42
          Top = 52
          Width = 27
          Height = 21
          HelpContext = 279
          TabOrder = 0
          Text = '3'
          OnChange = SETopMaChange
        end
        object SELeftMa: TEdit
          Left = 6
          Top = 76
          Width = 27
          Height = 21
          HelpContext = 279
          TabOrder = 1
          Text = '3'
          OnChange = SELeftMaChange
        end
        object SEBotMa: TEdit
          Left = 42
          Top = 100
          Width = 27
          Height = 21
          HelpContext = 279
          TabOrder = 2
          Text = '3'
          OnChange = SEBotMaChange
        end
        object SERightMa: TEdit
          Left = 72
          Top = 76
          Width = 27
          Height = 21
          HelpContext = 279
          TabOrder = 3
          Text = '3'
          OnChange = SERightMaChange
        end
        object UDTopMa: TUpDown
          Left = 69
          Top = 52
          Width = 15
          Height = 21
          HelpContext = 279
          Associate = SETopMa
          Increment = 5
          Position = 3
          TabOrder = 4
        end
        object UDRightMa: TUpDown
          Left = 99
          Top = 76
          Width = 15
          Height = 21
          HelpContext = 279
          Associate = SERightMa
          Increment = 5
          Position = 3
          TabOrder = 5
        end
        object UDLeftMa: TUpDown
          Left = 33
          Top = 76
          Width = 15
          Height = 21
          HelpContext = 279
          Associate = SELeftMa
          Increment = 5
          Position = 3
          TabOrder = 6
        end
        object UDBotMa: TUpDown
          Left = 69
          Top = 100
          Width = 15
          Height = 21
          HelpContext = 279
          Associate = SEBotMa
          Increment = 5
          Position = 3
          TabOrder = 7
        end
        object CBMarUnits: TComboFlat
          Left = 8
          Top = 24
          Width = 106
          TabOrder = 8
          OnChange = CBMarUnitsChange
          Items.Strings = (
            'Percent'
            'Pixels')
        end
      end
    end
    object TabGradient: TTabSheet
      Caption = 'Gradient'
    end
    object TabShadow: TTabSheet
      Caption = 'Shadow'
      ImageIndex = 3
    end
    object TabEmboss: TTabSheet
      Caption = 'Emboss'
      ImageIndex = 6
    end
    object TabImage: TTabSheet
      Caption = 'Image'
      ImageIndex = 4
    end
  end
end
