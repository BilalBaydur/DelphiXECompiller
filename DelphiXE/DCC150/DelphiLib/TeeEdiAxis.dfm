object FormTeeAxis: TFormTeeAxis
  Left = 346
  Top = 280
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 229
  ClientWidth = 398
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poDefault
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 83
    Top = 0
    Height = 229
  end
  object PageAxis: TPageControl
    Left = 86
    Top = 0
    Width = 312
    Height = 229
    ActivePage = TabScales
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageAxisChange
    OnChanging = PageAxisChanging
    object TabScales: TTabSheet
      Caption = 'Scales'
      object PageControl1: TPageControl
        Left = 0
        Top = 0
        Width = 304
        Height = 201
        ActivePage = TabSheet4
        Align = alClient
        HotTrack = True
        TabOrder = 0
        object TabSheet4: TTabSheet
          Caption = 'Options'
          ImageIndex = -1
          object Label2: TLabel
            Left = 38
            Top = 94
            Width = 48
            Height = 13
            Alignment = taRightJustify
            Caption = 'L&og Base:'
            FocusControl = ELogBase
          end
          object CBAutomatic: TCheckBox
            Left = 2
            Top = 5
            Width = 77
            Height = 17
            HelpContext = 79
            Caption = '&Automatic'
            TabOrder = 0
            OnClick = CBAutomaticClick
          end
          object CBLogarithmic: TCheckBox
            Left = 2
            Top = 61
            Width = 107
            Height = 17
            HelpContext = 277
            Caption = '&Logarithmic'
            TabOrder = 1
            OnClick = CBLogarithmicClick
          end
          object CBVisible: TCheckBox
            Left = 2
            Top = 29
            Width = 75
            Height = 17
            HelpContext = 677
            Caption = '&Visible'
            TabOrder = 2
            OnClick = CBVisibleClick
          end
          object CBInverted: TCheckBox
            Left = 128
            Top = 29
            Width = 113
            Height = 17
            HelpContext = 250
            Caption = '&Inverted'
            TabOrder = 3
            OnClick = CBInvertedClick
          end
          object ELogBase: TEdit
            Left = 90
            Top = 91
            Width = 50
            Height = 21
            HelpContext = 895
            TabOrder = 4
            Text = '10'
            OnChange = ELogBaseChange
          end
          object LogE: TCheckBox
            Left = 146
            Top = 92
            Width = 37
            Height = 17
            Caption = '&e'
            TabOrder = 5
            OnClick = LogEClick
          end
        end
        object TabSheet1: TTabSheet
          Caption = 'Minimum'
          object LAxisMin: TLabel
            Left = 75
            Top = 6
            Width = 22
            Height = 13
            Caption = '(min)'
          end
          object Label4: TLabel
            Left = 149
            Top = 33
            Width = 31
            Height = 13
            Alignment = taRightJustify
            Caption = '&Offset:'
            FocusControl = EMinOff
          end
          object CBAutoMin: TCheckBox
            Left = 2
            Top = 6
            Width = 68
            Height = 17
            HelpContext = 81
            Caption = 'A&uto'
            TabOrder = 0
            OnClick = CBAutoMaxClick
          end
          object BAxisMin: TButton
            Left = 2
            Top = 28
            Width = 79
            Height = 25
            HelpContext = 292
            Caption = '&Change...'
            TabOrder = 1
            OnClick = BAxisMinClick
          end
          object EMinOff: TEdit
            Left = 184
            Top = 30
            Width = 33
            Height = 21
            TabOrder = 2
            Text = '0'
            OnChange = EMinOffChange
          end
          object UDMinOff: TUpDown
            Left = 217
            Top = 30
            Width = 15
            Height = 21
            Associate = EMinOff
            Min = -10000
            Max = 10000
            TabOrder = 3
          end
          object CBMinRound: TCheckBox
            Left = 2
            Top = 64
            Width = 135
            Height = 17
            Caption = 'Round'
            TabOrder = 4
            OnClick = CBMinRoundClick
          end
        end
        object TabSheet2: TTabSheet
          Caption = 'Maximum'
          ImageIndex = 1
          object LAxisMax: TLabel
            Left = 75
            Top = 6
            Width = 25
            Height = 13
            Caption = '(max)'
          end
          object Label5: TLabel
            Left = 149
            Top = 33
            Width = 31
            Height = 13
            Alignment = taRightJustify
            Caption = '&Offset:'
            FocusControl = EMaxOff
          end
          object CBAutoMax: TCheckBox
            Left = 2
            Top = 6
            Width = 68
            Height = 17
            HelpContext = 80
            Caption = 'A&uto'
            TabOrder = 0
            OnClick = CBAutoMaxClick
          end
          object BAxisMax: TButton
            Left = 2
            Top = 28
            Width = 79
            Height = 25
            HelpContext = 288
            Caption = '&Change...'
            TabOrder = 1
            OnClick = BAxisMaxClick
          end
          object EMaxOff: TEdit
            Left = 184
            Top = 30
            Width = 33
            Height = 21
            TabOrder = 2
            Text = '0'
            OnChange = EMaxOffChange
          end
          object UDMaxOff: TUpDown
            Left = 217
            Top = 30
            Width = 15
            Height = 21
            Associate = EMaxOff
            Min = -10000
            Max = 10000
            TabOrder = 3
          end
          object CBMaxRound: TCheckBox
            Left = 2
            Top = 64
            Width = 135
            Height = 17
            Caption = 'Round'
            TabOrder = 4
            OnClick = CBMaxRoundClick
          end
        end
        object TabSheet3: TTabSheet
          Caption = 'Increment'
          ImageIndex = 2
          object L6: TLabel
            Left = 5
            Top = 45
            Width = 92
            Height = 13
            AutoSize = False
            Caption = 'Desired Increment:'
          end
          object LAxisIncre: TLabel
            Left = 6
            Top = 63
            Width = 52
            Height = 13
            Caption = '(increment)'
          end
          object BIncre: TButton
            Left = 2
            Top = 9
            Width = 75
            Height = 25
            HelpContext = 248
            Caption = '&Change...'
            TabOrder = 0
            OnClick = BIncreClick
          end
          object CBShowAll: TCheckBox
            Left = 99
            Top = 13
            Width = 166
            Height = 17
            Caption = 'Show &all labels'
            TabOrder = 1
            OnClick = CBShowAllClick
          end
        end
      end
    end
    object TabTitle: TTabSheet
      HelpContext = 650
      Caption = 'Title'
      object PageTitle: TPageControl
        Left = 0
        Top = 0
        Width = 304
        Height = 201
        ActivePage = TabTitleStyle
        Align = alClient
        HotTrack = True
        TabOrder = 0
        OnChange = PageTitleChange
        object TabTitleStyle: TTabSheet
          Caption = 'Style'
          object L14: TLabel
            Left = 4
            Top = 20
            Width = 51
            Height = 21
            Alignment = taRightJustify
            AutoSize = False
            Caption = 'T&itle:'
            FocusControl = ETitle
          end
          object L3: TLabel
            Left = 4
            Top = 54
            Width = 51
            Height = 19
            Alignment = taRightJustify
            AutoSize = False
            Caption = '&Angle:'
            FocusControl = SETitleAngle
          end
          object L9: TLabel
            Left = 4
            Top = 90
            Width = 51
            Height = 19
            Alignment = taRightJustify
            AutoSize = False
            Caption = 'Si&ze:'
            FocusControl = SETitleSize
          end
          object ETitle: TEdit
            Left = 60
            Top = 16
            Width = 197
            Height = 21
            HelpContext = 135
            TabOrder = 0
            OnChange = ETitleChange
          end
          object SETitleAngle: TEdit
            Left = 60
            Top = 49
            Width = 35
            Height = 21
            HelpContext = 45
            TabOrder = 1
            Text = '0'
            OnChange = SETitleAngleChange
          end
          object UDTitleAngle: TUpDown
            Left = 95
            Top = 49
            Width = 15
            Height = 21
            Associate = SETitleAngle
            Max = 360
            Increment = 90
            TabOrder = 2
          end
          object SETitleSize: TEdit
            Left = 60
            Top = 85
            Width = 35
            Height = 21
            HelpContext = 652
            TabOrder = 3
            Text = '0'
            OnChange = SETitleSizeChange
          end
          object UDTitleSize: TUpDown
            Left = 95
            Top = 85
            Width = 15
            Height = 21
            Associate = SETitleSize
            Max = 1000
            TabOrder = 4
          end
          object CBTitleVisible: TCheckBox
            Left = 60
            Top = 115
            Width = 97
            Height = 17
            Caption = '&Visible'
            TabOrder = 5
            OnClick = CBTitleVisibleClick
          end
        end
        object TabTitleFormat: TTabSheet
          Caption = 'Format'
          ImageIndex = 2
          object PageTitleFormat: TPageControl
            Left = 0
            Top = 0
            Width = 291
            Height = 173
            Align = alClient
            TabOrder = 0
            OnChange = PageTitleFormatChange
          end
        end
      end
    end
    object TabLabels: TTabSheet
      HelpContext = 502
      Caption = 'Labels'
      object PageLabels: TPageControl
        Left = 0
        Top = 0
        Width = 304
        Height = 201
        ActivePage = TabLabStyle
        Align = alClient
        HotTrack = True
        TabOrder = 0
        OnChange = PageLabelsChange
        object TabLabStyle: TTabSheet
          Caption = 'Style'
          object L26: TLabel
            Left = 209
            Top = 9
            Width = 23
            Height = 13
            Alignment = taRightJustify
            Caption = 'Si&ze:'
            FocusControl = SELabelsSize
          end
          object L23: TLabel
            Left = 202
            Top = 37
            Width = 30
            Height = 13
            Alignment = taRightJustify
            Caption = 'An&gle:'
            FocusControl = SELabelsAngle
          end
          object L20: TLabel
            Left = 144
            Top = 63
            Width = 88
            Height = 13
            Alignment = taRightJustify
            Caption = 'Min. Se&paration %:'
            FocusControl = SESepar
          end
          object Label3: TLabel
            Left = 163
            Top = 92
            Width = 26
            Height = 13
            Alignment = taRightJustify
            Caption = '&Style:'
            FocusControl = CBLabelStyle
          end
          object CBLabels: TCheckBox
            Left = 8
            Top = 8
            Width = 121
            Height = 17
            HelpContext = 261
            Caption = 'V&isible'
            TabOrder = 0
            OnClick = CBLabelsClick
          end
          object CBMultiline: TCheckBox
            Left = 8
            Top = 31
            Width = 121
            Height = 17
            HelpContext = 777
            Caption = 'Multi-lin&e'
            TabOrder = 1
            OnClick = CBMultilineClick
          end
          object CBOnAxis: TCheckBox
            Left = 8
            Top = 77
            Width = 129
            Height = 17
            HelpContext = 264
            Caption = 'Label on A&xis'
            TabOrder = 2
            OnClick = CBOnAxisClick
          end
          object CBRoundFirst: TCheckBox
            Left = 8
            Top = 54
            Width = 113
            Height = 17
            HelpContext = 411
            Caption = 'Ro&und First'
            TabOrder = 3
            OnClick = CBRoundFirstClick
          end
          object SELabelsSize: TEdit
            Left = 236
            Top = 6
            Width = 32
            Height = 21
            HelpContext = 266
            TabOrder = 4
            Text = '0'
            OnChange = SELabelsSizeChange
          end
          object SELabelsAngle: TEdit
            Left = 236
            Top = 33
            Width = 32
            Height = 21
            HelpContext = 45
            TabOrder = 5
            Text = '0'
            OnChange = SELabelsAngleChange
          end
          object UDLabelsAngle: TUpDown
            Left = 268
            Top = 33
            Width = 15
            Height = 21
            Associate = SELabelsAngle
            Max = 360
            Increment = 90
            TabOrder = 6
          end
          object UDLabelsSize: TUpDown
            Left = 268
            Top = 6
            Width = 15
            Height = 21
            Associate = SELabelsSize
            Max = 1000
            TabOrder = 7
          end
          object SESepar: TEdit
            Left = 236
            Top = 59
            Width = 32
            Height = 21
            HelpContext = 265
            TabOrder = 8
            Text = '0'
            OnChange = SESeparChange
          end
          object UDSepar: TUpDown
            Left = 268
            Top = 59
            Width = 15
            Height = 21
            Associate = SESepar
            Increment = 10
            TabOrder = 9
          end
          object CBLabelStyle: TComboFlat
            Left = 191
            Top = 88
            Width = 94
            TabOrder = 10
            OnChange = RGLabelStyleClick
            Items.Strings = (
              'Auto'
              'None'
              'Value'
              'Mark'
              'Text')
          end
          object CBAlternate: TCheckBox
            Left = 8
            Top = 100
            Width = 120
            Height = 17
            Caption = '&Alternate'
            TabOrder = 11
            OnClick = CBAlternateClick
          end
          object CBLabelsBehind: TCheckBox
            Left = 8
            Top = 123
            Width = 97
            Height = 17
            Caption = 'Behind Grid'
            TabOrder = 12
            OnClick = CBLabelsBehindClick
          end
        end
        object TabLabFormat: TTabSheet
          Caption = 'Format'
          object LabelAxisFormat: TLabel
            Left = 16
            Top = 48
            Width = 69
            Height = 13
            Caption = 'Labels For&mat:'
            FocusControl = CBFormat
          end
          object CBFormat: TComboFlat
            Left = 16
            Top = 64
            Width = 175
            HelpContext = 84
            Style = csDropDown
            ItemHeight = 0
            TabOrder = 0
            OnChange = CBFormatChange
          end
          object CBExpo: TCheckBox
            Left = 16
            Top = 16
            Width = 102
            Height = 17
            HelpContext = 1459
            Caption = '&Exponential'
            TabOrder = 1
            OnClick = CBExpoClick
          end
          object CBLabelAlign: TCheckBox
            Left = 16
            Top = 96
            Width = 177
            Height = 17
            HelpContext = 1460
            Caption = '&Default Alignment'
            TabOrder = 2
            OnClick = CBLabelAlignClick
          end
          object Button1: TButton
            Left = 195
            Top = 63
            Width = 22
            Height = 22
            Caption = '...'
            TabOrder = 3
            OnClick = Button1Click
          end
        end
        object TabLabelsFont: TTabSheet
          Caption = 'Text'
        end
      end
    end
    object TabTicks: TTabSheet
      HelpContext = 646
      Caption = 'Ticks'
      object L28: TLabel
        Left = 103
        Top = 52
        Width = 21
        Height = 13
        Alignment = taRightJustify
        Caption = 'Len:'
      end
      object L29: TLabel
        Left = 103
        Top = 84
        Width = 21
        Height = 13
        Alignment = taRightJustify
        Caption = 'Len:'
      end
      object L30: TLabel
        Left = 103
        Top = 118
        Width = 21
        Height = 13
        Alignment = taRightJustify
        Caption = 'Len:'
      end
      object Label9: TLabel
        Left = 189
        Top = 118
        Width = 31
        Height = 13
        Alignment = taRightJustify
        Caption = '&Count:'
        FocusControl = Edit3
      end
      object BAxisPen: TButtonPen
        Left = 8
        Top = 12
        HelpContext = 83
        Caption = '&Axis...'
        TabOrder = 0
      end
      object BTickPen: TButtonPen
        Left = 8
        Top = 48
        HelpContext = 646
        Caption = 'T&icks...'
        TabOrder = 1
      end
      object BTickInner: TButtonPen
        Left = 8
        Top = 80
        HelpContext = 647
        Caption = 'I&nner...'
        TabOrder = 4
      end
      object SEAxisTickLength: TEdit
        Left = 128
        Top = 48
        Width = 34
        Height = 21
        HelpContext = 644
        TabOrder = 2
        Text = '0'
        OnChange = SEAxisTickLengthChange
      end
      object SEInnerTicksLength: TEdit
        Left = 128
        Top = 80
        Width = 34
        Height = 21
        HelpContext = 643
        TabOrder = 5
        Text = '0'
        OnChange = SEInnerTicksLengthChange
      end
      object CBTickOnLabels: TCheckBox
        Left = 188
        Top = 44
        Width = 109
        Height = 29
        HelpContext = 645
        Caption = 'At Labels Onl&y'
        TabOrder = 3
        OnClick = CBTickOnLabelsClick
      end
      object UDInnerTicksLength: TUpDown
        Left = 162
        Top = 80
        Width = 15
        Height = 21
        Associate = SEInnerTicksLength
        Max = 1000
        TabOrder = 6
      end
      object UDAxisTickLength: TUpDown
        Left = 162
        Top = 48
        Width = 15
        Height = 21
        Associate = SEAxisTickLength
        Min = -1000
        Max = 1000
        TabOrder = 7
      end
      object BTickMinor: TButtonPen
        Left = 8
        Top = 114
        HelpContext = 297
        Caption = '&Minor...'
        TabOrder = 8
      end
      object SEAxisMinorTickLen: TEdit
        Left = 128
        Top = 114
        Width = 34
        Height = 21
        HelpContext = 294
        TabOrder = 9
        Text = '0'
        OnChange = SEAxisMinorTickLenChange
      end
      object UDAxisMinorTickLen: TUpDown
        Left = 162
        Top = 114
        Width = 15
        Height = 21
        Associate = SEAxisMinorTickLen
        Min = -1000
        Max = 1000
        TabOrder = 10
      end
      object Edit3: TEdit
        Left = 224
        Top = 114
        Width = 34
        Height = 21
        HelpContext = 293
        TabOrder = 11
        Text = '0'
        OnChange = Edit3Change
      end
      object UDMinorC: TUpDown
        Left = 258
        Top = 114
        Width = 15
        Height = 21
        Associate = Edit3
        Max = 1000
        TabOrder = 12
      end
    end
    object TabMinorTicks: TTabSheet
      Caption = 'Grid'
      object L31: TLabel
        Left = 101
        Top = 97
        Width = 31
        Height = 13
        Alignment = taRightJustify
        Caption = '&Count:'
        FocusControl = SEMinorCount
      end
      object Label6: TLabel
        Left = 122
        Top = 20
        Width = 10
        Height = 13
        Alignment = taRightJustify
        Caption = '&Z:'
      end
      object Label8: TLabel
        Left = 75
        Top = 56
        Width = 57
        Height = 13
        Alignment = taRightJustify
        Caption = 'Draw &every:'
        FocusControl = EMarksEvery
      end
      object SEMinorCount: TEdit
        Left = 136
        Top = 93
        Width = 34
        Height = 21
        HelpContext = 293
        TabOrder = 0
        Text = '0'
        OnChange = SEMinorCountChange
      end
      object UDMinorCount: TUpDown
        Left = 170
        Top = 93
        Width = 15
        Height = 21
        Associate = SEMinorCount
        Max = 1000
        TabOrder = 1
      end
      object BMinorGrid: TButtonPen
        Left = 8
        Top = 91
        HelpContext = 240
        Caption = '&Minor...'
        TabOrder = 2
      end
      object BAxisGrid: TButtonPen
        Left = 8
        Top = 12
        HelpContext = 240
        Caption = '&Grid...'
        TabOrder = 3
      end
      object Edit2: TEdit
        Left = 136
        Top = 16
        Width = 34
        Height = 21
        HelpContext = 1938
        TabOrder = 4
        Text = '0'
        OnChange = Edit2Change
      end
      object UDGridZ: TUpDown
        Left = 170
        Top = 16
        Width = 15
        Height = 21
        Associate = Edit2
        TabOrder = 5
      end
      object CBGridCentered: TCheckBox
        Left = 196
        Top = 13
        Width = 105
        Height = 25
        HelpContext = 761
        Caption = 'C&entered'
        TabOrder = 6
        OnClick = CBGridCenteredClick
      end
      object EMarksEvery: TEdit
        Left = 136
        Top = 53
        Width = 35
        Height = 21
        HelpContext = 1304
        TabOrder = 7
        Text = '1'
        OnChange = EMarksEveryChange
      end
      object UDEvery: TUpDown
        Left = 171
        Top = 53
        Width = 15
        Height = 21
        HelpContext = 1304
        Associate = EMarksEvery
        Min = 1
        Max = 5000
        Position = 1
        TabOrder = 8
      end
    end
    object TabPositions: TTabSheet
      Caption = 'Position'
      object Label41: TLabel
        Left = 18
        Top = 16
        Width = 51
        Height = 13
        Alignment = taRightJustify
        Caption = '&Position %:'
        FocusControl = EPos
      end
      object Label42: TLabel
        Left = 33
        Top = 56
        Width = 36
        Height = 13
        Alignment = taRightJustify
        Caption = 'St&art %:'
        FocusControl = EStart
      end
      object Label43: TLabel
        Left = 36
        Top = 88
        Width = 33
        Height = 13
        Alignment = taRightJustify
        Caption = '&End %:'
        FocusControl = EEnd
      end
      object LabelZ: TLabel
        Left = 154
        Top = 87
        Width = 21
        Height = 13
        Alignment = taRightJustify
        Caption = '&Z %:'
        FocusControl = Edit1
      end
      object Label7: TLabel
        Left = 147
        Top = 8
        Width = 27
        Height = 13
        Caption = '&Units:'
        FocusControl = CBPosUnits
      end
      object EPos: TEdit
        Left = 74
        Top = 12
        Width = 32
        Height = 21
        HelpContext = 774
        TabOrder = 0
        Text = '0'
        OnChange = EPosChange
      end
      object EStart: TEdit
        Left = 74
        Top = 52
        Width = 32
        Height = 21
        HelpContext = 775
        TabOrder = 1
        Text = '0'
        OnChange = EStartChange
      end
      object EEnd: TEdit
        Left = 74
        Top = 84
        Width = 32
        Height = 21
        HelpContext = 776
        TabOrder = 2
        Text = '0'
        OnChange = EEndChange
      end
      object UDPos: TUpDown
        Left = 106
        Top = 12
        Width = 15
        Height = 21
        HelpContext = 774
        Associate = EPos
        Min = -1000
        Max = 1000
        TabOrder = 3
      end
      object UDStart: TUpDown
        Left = 106
        Top = 52
        Width = 15
        Height = 21
        HelpContext = 775
        Associate = EStart
        TabOrder = 4
      end
      object UDEnd: TUpDown
        Left = 106
        Top = 84
        Width = 15
        Height = 21
        HelpContext = 776
        Associate = EEnd
        TabOrder = 5
      end
      object CBOtherSide: TCheckBox
        Left = 74
        Top = 120
        Width = 133
        Height = 17
        Caption = '&Other side'
        TabOrder = 6
        OnClick = CBOtherSideClick
      end
      object CBHorizAxis: TCheckBox
        Left = 74
        Top = 144
        Width = 133
        Height = 17
        Caption = '&Horizontal'
        TabOrder = 7
        OnClick = CBHorizAxisClick
      end
      object Edit1: TEdit
        Left = 180
        Top = 84
        Width = 32
        Height = 21
        HelpContext = 775
        TabOrder = 8
        Text = '0'
        OnChange = Edit1Change
      end
      object UDZ: TUpDown
        Left = 212
        Top = 84
        Width = 15
        Height = 21
        HelpContext = 775
        Associate = Edit1
        TabOrder = 9
      end
      object CBPosUnits: TComboFlat
        Left = 144
        Top = 24
        Width = 106
        TabOrder = 10
        OnChange = CBPosUnitsChange
        Items.Strings = (
          'Percent'
          'Pixels')
      end
    end
    object TabItems: TTabSheet
      Caption = 'Items'
      ImageIndex = 6
      object ListItems: TListBox
        Left = 0
        Top = 0
        Width = 89
        Height = 201
        Align = alLeft
        ItemHeight = 13
        TabOrder = 0
        OnClick = ListItemsClick
      end
      object PanelItems: TPanel
        Left = 89
        Top = 0
        Width = 215
        Height = 201
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 1
        object Label10: TLabel
          Left = 24
          Top = 10
          Width = 30
          Height = 13
          Alignment = taRightJustify
          Caption = '&Value:'
          FocusControl = EItemValue
        end
        object EItemValue: TEdit
          Left = 56
          Top = 7
          Width = 105
          Height = 21
          TabOrder = 0
          OnChange = EItemValueChange
        end
        object Button2: TButton
          Left = 24
          Top = 40
          Width = 75
          Height = 25
          Caption = '&Format...'
          TabOrder = 1
          OnClick = Button2Click
        end
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 83
    Height = 229
    Align = alLeft
    TabOrder = 1
    object Panel2: TPanel
      Left = 1
      Top = 200
      Width = 81
      Height = 28
      Align = alBottom
      BevelOuter = bvNone
      TabOrder = 0
      object BAdd: TSpeedButton
        Left = 11
        Top = 3
        Width = 23
        Height = 22
        Caption = '+'
        Flat = True
        OnClick = BAddClick
      end
      object BDelete: TSpeedButton
        Left = 50
        Top = 3
        Width = 23
        Height = 22
        Caption = '-'
        Enabled = False
        Flat = True
        OnClick = BDeleteClick
      end
    end
    object Panel4: TPanel
      Left = 1
      Top = 1
      Width = 81
      Height = 56
      Align = alTop
      BevelOuter = bvNone
      TabOrder = 1
      object Label1: TLabel
        Left = 4
        Top = 41
        Width = 26
        Height = 13
        Caption = 'A&xes:'
        FocusControl = LBAxes
      end
      object CBShow: TCheckBox
        Left = 9
        Top = 4
        Width = 64
        Height = 17
        HelpContext = 85
        Caption = 'Visible'
        TabOrder = 0
        OnClick = CBShowClick
      end
      object CBAxisBeh: TCheckBox
        Left = 9
        Top = 22
        Width = 64
        Height = 17
        HelpContext = 891
        Caption = '&Behind'
        TabOrder = 1
        OnClick = CBAxisBehClick
      end
    end
    object LBAxes: TListBox
      Left = 1
      Top = 57
      Width = 81
      Height = 143
      HelpContext = 1456
      Align = alClient
      ItemHeight = 13
      TabOrder = 2
      OnClick = LBAxesClick
    end
  end
end
