object FormTeeLegend: TFormTeeLegend
  Left = 492
  Top = 247
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 224
  ClientWidth = 374
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
    Width = 374
    Height = 224
    ActivePage = TabSheet1
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = 'Style'
      object L12: TLabel
        Left = 136
        Top = 44
        Width = 50
        Height = 13
        Alignment = taRightJustify
        Caption = 'Text St&yle:'
        FocusControl = CBLegStyle
      end
      object L7: TLabel
        Left = 120
        Top = 16
        Width = 65
        Height = 13
        Alignment = taRightJustify
        Caption = 'Legend &Style:'
        FocusControl = CBLegendStyle
      end
      object Label1: TLabel
        Left = 210
        Top = 74
        Width = 67
        Height = 13
        Alignment = taRightJustify
        Caption = 'V&ert. Spacing:'
        FocusControl = EVertSpacing
      end
      object CBShow: TCheckBox
        Left = 24
        Top = 16
        Width = 63
        Height = 17
        HelpContext = 679
        Caption = '&Visible'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBShowClick
      end
      object CBInverted: TCheckBox
        Left = 24
        Top = 44
        Width = 81
        Height = 17
        HelpContext = 250
        Caption = '&Inverted'
        TabOrder = 1
        OnClick = CBInvertedClick
      end
      object CBLegendStyle: TComboFlat
        Left = 192
        Top = 12
        Width = 149
        HelpContext = 273
        TabOrder = 2
        OnChange = CBLegendStyleChange
        Items.Strings = (
          'Automatic'
          'Series Names'
          'Series Values'
          'Last Values'
          'Series Groups')
      end
      object CBLegStyle: TComboFlat
        Left = 192
        Top = 40
        Width = 149
        HelpContext = 642
        DropDownCount = 11
        TabOrder = 3
        OnChange = CBLegStyleChange
        Items.Strings = (
          'Plain'
          'Left Value'
          'Right Value'
          'Left Percent'
          'Right Percent'
          'X Value'
          'Value'
          'Percent'
          'X and Value'
          'X and Percent')
      end
      object BDivLines: TButtonPen
        Left = 200
        Top = 104
        Width = 137
        HelpContext = 185
        Caption = '&Dividing Lines...'
        TabOrder = 4
      end
      object EVertSpacing: TEdit
        Left = 283
        Top = 71
        Width = 41
        Height = 21
        HelpContext = 1292
        TabOrder = 5
        Text = '0'
        OnChange = EVertSpacingChange
      end
      object UDVertSpacing: TUpDown
        Left = 324
        Top = 71
        Width = 15
        Height = 21
        HelpContext = 1292
        Associate = EVertSpacing
        Min = -10
        TabOrder = 6
      end
      object CBFontColor: TCheckBox
        Left = 24
        Top = 72
        Width = 151
        Height = 17
        HelpContext = 1287
        Caption = '&Font Series Color'
        TabOrder = 7
        OnClick = CBFontColorClick
      end
      object CBCheckBoxes: TComboFlat
        Left = 24
        Top = 104
        Width = 145
        TabOrder = 8
        OnChange = CBCheckBoxesChange
        Items.Strings = (
          'No check boxes'
          'Check boxes'
          'Radio buttons')
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Position'
      object L10: TLabel
        Left = 124
        Top = 76
        Width = 82
        Height = 13
        Alignment = taRightJustify
        Caption = '&Position Offset %:'
        FocusControl = SETopPos
      end
      object L1: TLabel
        Left = 171
        Top = 41
        Width = 35
        Height = 13
        Alignment = taRightJustify
        Caption = '&Margin:'
        FocusControl = SEMargin
      end
      object CBResizeChart: TCheckBox
        Left = 212
        Top = 8
        Width = 142
        Height = 17
        HelpContext = 407
        Caption = 'Resi&ze Chart'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBResizeChartClick
      end
      object SETopPos: TEdit
        Left = 212
        Top = 71
        Width = 41
        Height = 21
        HelpContext = 654
        TabOrder = 1
        Text = '0'
        OnChange = SETopPosChange
      end
      object UDTopPos: TUpDown
        Left = 253
        Top = 71
        Width = 15
        Height = 21
        HelpContext = 654
        Associate = SETopPos
        Min = -100
        TabOrder = 2
      end
      object SEMargin: TEdit
        Left = 212
        Top = 39
        Width = 41
        Height = 21
        HelpContext = 244
        TabOrder = 3
        Text = '0'
        OnChange = SEMarginChange
      end
      object UDMargin: TUpDown
        Left = 253
        Top = 39
        Width = 15
        Height = 21
        HelpContext = 244
        Associate = SEMargin
        Min = -1000
        Max = 1000
        TabOrder = 4
      end
      object RGPosition: TRadioGroup
        Left = 16
        Top = 8
        Width = 89
        Height = 97
        HelpContext = 40
        Caption = 'Position'
        Items.Strings = (
          '&Left'
          '&Right'
          '&Top'
          '&Bottom')
        TabOrder = 5
        OnClick = RGPositionClick
      end
      object GroupBox1: TGroupBox
        Left = 16
        Top = 107
        Width = 249
        Height = 84
        TabOrder = 6
        object Label4: TLabel
          Left = 72
          Top = 31
          Width = 21
          Height = 13
          Alignment = taRightJustify
          Caption = 'L&eft:'
          FocusControl = ECustLeft
        end
        object Label5: TLabel
          Left = 71
          Top = 58
          Width = 22
          Height = 13
          Alignment = taRightJustify
          Caption = 'T&op:'
          FocusControl = ECustTop
        end
        object ECustLeft: TEdit
          Left = 95
          Top = 27
          Width = 38
          Height = 21
          HelpContext = 1461
          Enabled = False
          TabOrder = 0
          Text = '0'
          OnChange = ECustLeftChange
        end
        object UDLeft: TUpDown
          Left = 133
          Top = 27
          Width = 15
          Height = 21
          HelpContext = 1461
          Associate = ECustLeft
          Enabled = False
          Min = -100
          Max = 9000
          Increment = 5
          TabOrder = 1
        end
        object ECustTop: TEdit
          Left = 95
          Top = 54
          Width = 38
          Height = 21
          HelpContext = 1462
          Enabled = False
          TabOrder = 2
          Text = '0'
          OnChange = ECustTopChange
        end
        object UDTop: TUpDown
          Left = 133
          Top = 54
          Width = 15
          Height = 21
          HelpContext = 1462
          Associate = ECustTop
          Enabled = False
          Min = -100
          Max = 9000
          Increment = 5
          TabOrder = 3
        end
        object CBCustPos: TCheckBox
          Left = 8
          Top = 10
          Width = 107
          Height = 17
          HelpContext = 1442
          Caption = '&Custom:'
          TabOrder = 4
          OnClick = CBCustPosClick
        end
        object CBPosPercent: TCheckBox
          Left = 158
          Top = 41
          Width = 80
          Height = 17
          Caption = 'Percent'
          TabOrder = 5
          OnClick = CBPosPercentClick
        end
      end
    end
    object TabSymbol: TTabSheet
      Caption = 'Symbols'
    end
    object TabTitle: TTabSheet
      Caption = 'Title'
      ImageIndex = 3
      object PageControl2: TPageControl
        Left = 0
        Top = 0
        Width = 366
        Height = 196
        ActivePage = TabSheet4
        Align = alClient
        TabOrder = 0
        OnChange = PageControl2Change
        object TabSheet4: TTabSheet
          Caption = 'Options'
          object Label6: TLabel
            Left = 7
            Top = 1
            Width = 24
            Height = 13
            Caption = '&Text:'
            FocusControl = MemoText
          end
          object Label7: TLabel
            Left = 11
            Top = 115
            Width = 72
            Height = 13
            Caption = 'Text &alignment:'
            FocusControl = CBTextAlign
          end
          object MemoText: TMemo
            Left = 8
            Top = 16
            Width = 233
            Height = 94
            HelpContext = 1893
            TabOrder = 0
            OnChange = MemoTextChange
          end
          object CBTextAlign: TComboFlat
            Left = 8
            Top = 131
            Width = 121
            HelpContext = 1894
            TabOrder = 1
            OnChange = CBTextAlignChange
            Items.Strings = (
              'Left'
              'Center'
              'Right')
          end
          object CBTitleVisible: TCheckBox
            Left = 143
            Top = 131
            Width = 97
            Height = 17
            Caption = '&Visible'
            TabOrder = 2
            OnClick = CBTitleVisibleClick
          end
          object Button1: TButton
            Left = 248
            Top = 16
            Width = 75
            Height = 25
            Caption = '&Edit...'
            TabOrder = 3
            OnClick = Button1Click
          end
        end
      end
    end
  end
end
