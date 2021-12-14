object FormTeeSeries: TFormTeeSeries
  Left = 482
  Top = 263
  ActiveControl = CBSeries
  AutoScroll = False
  ClientHeight = 258
  ClientWidth = 398
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageSeries: TPageControl
    Left = 0
    Top = 25
    Width = 398
    Height = 233
    ActivePage = TheTabSheet
    Align = alClient
    HotTrack = True
    TabOrder = 1
    OnChange = PageSeriesChange
    OnChanging = PageSeriesChanging
    object TheTabSheet: TTabSheet
      Caption = 'Format'
    end
    object TabGeneral: TTabSheet
      Caption = 'General'
      object LSort: TLabel
        Left = 252
        Top = 179
        Width = 22
        Height = 13
        Alignment = taRightJustify
        Caption = 'S&ort:'
        FocusControl = CBSort
      end
      object LSort2: TLabel
        Left = 243
        Top = 155
        Width = 31
        Height = 13
        Alignment = taRightJustify
        Caption = 'So&rt 2:'
        FocusControl = CBSort2
      end
      object GB5: TGroupBox
        Left = 12
        Top = 8
        Width = 209
        Height = 86
        Caption = 'General:'
        TabOrder = 0
        object L27: TLabel
          Left = 35
          Top = 37
          Width = 33
          Height = 13
          Alignment = taRightJustify
          Caption = '&Cursor:'
          FocusControl = CBCursor
        end
        object LDepth: TLabel
          Left = 35
          Top = 62
          Width = 32
          Height = 13
          Alignment = taRightJustify
          Caption = '&Depth:'
          FocusControl = EDepth
        end
        object SpeedButton1: TSpeedButton
          Left = 179
          Top = 32
          Width = 23
          Height = 22
          Caption = '...'
          Flat = True
          OnClick = SpeedButton1Click
        end
        object CBShowInLegend: TCheckBox
          Left = 72
          Top = 12
          Width = 135
          Height = 17
          HelpContext = 433
          Caption = '&Show In Legend'
          Checked = True
          State = cbChecked
          TabOrder = 0
          OnClick = CBShowInLegendClick
        end
        object CBCursor: TComboFlat
          Left = 72
          Top = 33
          Width = 105
          HelpContext = 173
          ItemHeight = 0
          Sorted = True
          TabOrder = 1
          OnChange = CBCursorChange
        end
        object EDepth: TEdit
          Left = 72
          Top = 59
          Width = 41
          Height = 21
          HelpContext = 1345
          TabOrder = 2
          Text = '0'
          OnChange = EDepthChange
        end
        object UDDepth: TUpDown
          Left = 113
          Top = 59
          Width = 15
          Height = 21
          HelpContext = 1345
          Associate = EDepth
          Max = 1200
          TabOrder = 3
        end
        object CBDepth: TCheckBox
          Left = 134
          Top = 62
          Width = 67
          Height = 17
          HelpContext = 1345
          Caption = 'Auto'
          TabOrder = 4
          OnClick = CBDepthClick
        end
      end
      object GB2: TGroupBox
        Left = 11
        Top = 98
        Width = 210
        Height = 75
        Caption = 'Formats:'
        TabOrder = 1
        object L15: TLabel
          Left = 33
          Top = 18
          Width = 35
          Height = 13
          Alignment = taRightJustify
          Caption = '&Values:'
          FocusControl = CBFormat
        end
        object L21: TLabel
          Left = 23
          Top = 46
          Width = 45
          Height = 13
          Alignment = taRightJustify
          Caption = '&Percents:'
          FocusControl = EPercentFormat
        end
        object Button1: TSpeedButton
          Left = 178
          Top = 15
          Width = 24
          Height = 21
          Caption = '...'
          Flat = True
          OnClick = Button1Click
        end
        object Button2: TSpeedButton
          Left = 178
          Top = 42
          Width = 24
          Height = 21
          Caption = '...'
          Flat = True
          OnClick = Button2Click
        end
        object EPercentFormat: TEdit
          Left = 72
          Top = 42
          Width = 104
          Height = 21
          HelpContext = 381
          TabOrder = 1
          OnChange = EPercentFormatChange
        end
        object CBFormat: TComboFlat
          Left = 72
          Top = 15
          Width = 104
          HelpContext = 84
          Style = csDropDown
          ItemHeight = 0
          TabOrder = 0
          OnChange = CBFormatChange
        end
      end
      object GBHorizAxis: TGroupBox
        Left = 236
        Top = 8
        Width = 137
        Height = 65
        Caption = 'Horizontal Axis:'
        TabOrder = 2
        object CBHorizAxis: TComboFlat
          Left = 8
          Top = 16
          Width = 121
          HelpContext = 243
          TabOrder = 0
          OnChange = CBHorizAxisChange
          Items.Strings = (
            'Top'
            'Bottom'
            'Top and Bottom')
        end
        object CBXDateTime: TCheckBox
          Left = 8
          Top = 40
          Width = 97
          Height = 17
          HelpContext = 179
          Caption = 'Dat&eTime'
          TabOrder = 1
          OnClick = CBXDateTimeClick
        end
      end
      object GBVertAxis: TGroupBox
        Left = 236
        Top = 80
        Width = 137
        Height = 65
        Caption = 'Vertical Axis:'
        TabOrder = 3
        object CBVertAxis: TComboFlat
          Left = 8
          Top = 16
          Width = 121
          HelpContext = 672
          TabOrder = 0
          OnChange = CBVertAxisChange
          Items.Strings = (
            'Left'
            'Right'
            'Left and Right')
        end
        object CBYDateTime: TCheckBox
          Left = 8
          Top = 40
          Width = 97
          Height = 17
          HelpContext = 179
          Caption = 'D&ateTime'
          TabOrder = 1
          OnClick = CBYDateTimeClick
        end
      end
      object CBSort: TComboFlat
        Left = 276
        Top = 175
        Width = 95
        HelpContext = 343
        TabOrder = 4
        OnChange = CBSortChange
        Items.Strings = (
          'Ascending'
          'Descending'
          'None')
      end
      object CBZDateTime: TCheckBox
        Left = 134
        Top = 178
        Width = 85
        Height = 17
        Caption = '&Z DateTime'
        TabOrder = 5
        Visible = False
        OnClick = CBZDateTimeClick
      end
      object CBShowInEditor: TCheckBox
        Left = 16
        Top = 178
        Width = 113
        Height = 17
        Caption = 'Show in this editor'
        TabOrder = 6
        Visible = False
        OnClick = CBShowInEditorClick
      end
      object CBSort2: TComboFlat
        Left = 276
        Top = 151
        Width = 95
        HelpContext = 343
        TabOrder = 7
        OnChange = CBSort2Change
        Items.Strings = (
          'Ascending'
          'Descending'
          'None')
      end
    end
    object TabMarks: TTabSheet
      HelpContext = 592
      Caption = 'Marks'
      object PageControlMarks: TPageControl
        Left = 0
        Top = 0
        Width = 390
        Height = 205
        ActivePage = TabSheet1
        Align = alClient
        HotTrack = True
        TabOrder = 0
        OnChange = PageControlMarksChange
        object TabSheet1: TTabSheet
          Caption = 'Style'
          object L23: TLabel
            Left = 46
            Top = 101
            Width = 30
            Height = 13
            Alignment = taRightJustify
            Caption = '&Angle:'
            FocusControl = SEMarksAngle
          end
          object Label3: TLabel
            Left = 20
            Top = 64
            Width = 57
            Height = 13
            Alignment = taRightJustify
            Caption = 'Draw &every:'
            FocusControl = EMarksEvery
          end
          object Label1: TLabel
            Left = 51
            Top = 36
            Width = 26
            Height = 13
            Alignment = taRightJustify
            Caption = '&Style:'
            FocusControl = RGMarkStyle
          end
          object Label6: TLabel
            Left = 26
            Top = 135
            Width = 50
            Height = 13
            Alignment = taRightJustify
            Caption = '&Text Align:'
            FocusControl = CBTextAlign
          end
          object CBMarksVisible: TCheckBox
            Left = 9
            Top = 8
            Width = 84
            Height = 17
            HelpContext = 682
            Caption = '&Visible'
            TabOrder = 0
            OnClick = CBMarksVisibleClick
          end
          object CBMarkClip: TCheckBox
            Left = 145
            Top = 61
            Width = 100
            Height = 17
            HelpContext = 154
            Caption = 'Cl&ipped'
            TabOrder = 2
            OnClick = CBMarkClipClick
          end
          object SEMarksAngle: TEdit
            Left = 80
            Top = 97
            Width = 35
            Height = 21
            HelpContext = 1472
            TabOrder = 7
            Text = '0'
            OnChange = SEMarksAngleChange
          end
          object UDMarksAngle: TUpDown
            Left = 115
            Top = 97
            Width = 15
            Height = 21
            HelpContext = 1472
            Associate = SEMarksAngle
            Max = 360
            Increment = 5
            TabOrder = 8
            Wrap = True
          end
          object EMarksEvery: TEdit
            Left = 80
            Top = 61
            Width = 35
            Height = 21
            HelpContext = 1304
            TabOrder = 5
            Text = '1'
            OnChange = EMarksEveryChange
          end
          object UDEvery: TUpDown
            Left = 115
            Top = 61
            Width = 15
            Height = 21
            HelpContext = 1304
            Associate = EMarksEvery
            Min = 1
            Max = 5000
            Position = 1
            TabOrder = 6
          end
          object CBMultiLine: TCheckBox
            Left = 145
            Top = 84
            Width = 121
            Height = 17
            HelpContext = 154
            Caption = '&Multi line'
            TabOrder = 4
            OnClick = CBMultiLineClick
          end
          object CBAllVisible: TCheckBox
            Left = 96
            Top = 8
            Width = 147
            Height = 17
            HelpContext = 682
            Caption = 'All Series Visi&ble'
            TabOrder = 1
            OnClick = CBAllVisibleClick
          end
          object RGMarkStyle: TComboFlat
            Left = 80
            Top = 32
            Width = 145
            HelpContext = 447
            DropDownCount = 12
            TabOrder = 3
            OnChange = RGMarkStyleClick
            Items.Strings = (
              'Value'
              'Percent'
              'Label'
              'Label and Percent'
              'Label and Value'
              'Legend'
              'Percent Total'
              'Label and Percent Total'
              'X value'
              'X and Y values'
              'Series Title'
              'Point Index'
              'Percent Relative')
          end
          object CBTextAlign: TComboFlat
            Left = 80
            Top = 132
            Width = 145
            ItemIndex = 2
            TabOrder = 9
            Text = 'Center'
            OnChange = CBTextAlignChange
            Items.Strings = (
              'Left'
              'Right'
              'Center')
          end
          object CBFontSeriesColor: TCheckBox
            Left = 145
            Top = 107
            Width = 121
            Height = 17
            HelpContext = 154
            Caption = '&Font Series Color'
            TabOrder = 10
            OnClick = CBFontSeriesColorClick
          end
        end
        object TabSheet2: TTabSheet
          Caption = 'Arrows'
          ImageIndex = 1
          object L32: TLabel
            Left = 54
            Top = 55
            Width = 36
            Height = 13
            Alignment = taRightJustify
            Caption = '&Length:'
            FocusControl = SEArrowLength
          end
          object Label4: TLabel
            Left = 45
            Top = 87
            Width = 45
            Height = 13
            Alignment = taRightJustify
            Caption = '&Distance:'
            FocusControl = EArrowDist
          end
          object Label11: TLabel
            Left = 194
            Top = 16
            Width = 57
            Height = 13
            Caption = '&Arrow head:'
          end
          object Label12: TLabel
            Left = 214
            Top = 62
            Width = 23
            Height = 13
            Alignment = taRightJustify
            Caption = '&Size:'
            FocusControl = Edit1
          end
          object BMarkLinCol: TButtonPen
            Left = 8
            Top = 16
            HelpContext = 54
            Caption = '&Border...'
            TabOrder = 0
          end
          object SEArrowLength: TEdit
            Left = 96
            Top = 51
            Width = 32
            Height = 21
            HelpContext = 56
            TabOrder = 1
            Text = '0'
            OnChange = SEArrowLengthChange
          end
          object UDArrowsLength: TUpDown
            Left = 128
            Top = 51
            Width = 15
            Height = 21
            HelpContext = 56
            Associate = SEArrowLength
            Min = -1000
            Max = 1000
            TabOrder = 2
          end
          object EArrowDist: TEdit
            Left = 96
            Top = 83
            Width = 32
            Height = 21
            HelpContext = 1901
            TabOrder = 3
            Text = '0'
            OnChange = EArrowDistChange
          end
          object UDArrowDist: TUpDown
            Left = 128
            Top = 83
            Width = 15
            Height = 21
            HelpContext = 1901
            Associate = EArrowDist
            Min = -1000
            Max = 1000
            TabOrder = 4
          end
          object BCalloutPointer: TButton
            Left = 96
            Top = 16
            Width = 75
            Height = 25
            Caption = '&Pointer...'
            TabOrder = 5
            OnClick = BCalloutPointerClick
          end
          object CBHead: TComboFlat
            Left = 192
            Top = 32
            Width = 99
            HelpContext = 1902
            TabOrder = 6
            OnChange = CBHeadChange
            Items.Strings = (
              'None'
              'Line'
              'Solid')
          end
          object Edit1: TEdit
            Left = 243
            Top = 59
            Width = 32
            Height = 21
            HelpContext = 1903
            TabOrder = 7
            Text = '0'
            OnChange = Edit1Change
          end
          object UDHeadSize: TUpDown
            Left = 275
            Top = 59
            Width = 15
            Height = 21
            HelpContext = 1903
            Associate = Edit1
            Min = -1000
            Max = 1000
            TabOrder = 8
          end
        end
        object TabSymbol: TTabSheet
          Caption = 'Symbol'
          ImageIndex = 2
        end
        object TabMargins: TTabSheet
          Caption = 'Margins'
          ImageIndex = 3
        end
      end
    end
    object TabDataSource: TTabSheet
      Caption = 'Data Source'
      object PanelRandomSource: TPanel
        Left = 0
        Top = 24
        Width = 390
        Height = 181
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 2
        Visible = False
        object Label2: TLabel
          Left = 21
          Top = 13
          Width = 122
          Height = 13
          Caption = '&Number of sample values:'
        end
        object ESamples: TEdit
          Left = 21
          Top = 30
          Width = 72
          Height = 21
          HelpContext = 1907
          TabOrder = 0
          Text = '0'
          OnChange = ESamplesChange
        end
        object CBSamplesDefault: TCheckBox
          Left = 108
          Top = 32
          Width = 109
          Height = 17
          HelpContext = 1907
          Caption = '&Default'
          TabOrder = 1
          OnClick = CBSamplesDefaultClick
        end
        object BApplyRandom: TButton
          Left = 20
          Top = 64
          Width = 75
          Height = 25
          HelpContext = 1908
          Caption = '&Apply'
          Enabled = False
          TabOrder = 2
          OnClick = BApplyRandomClick
        end
        object Button3: TButton
          Left = 108
          Top = 64
          Width = 75
          Height = 25
          Caption = '&Clear'
          TabOrder = 3
          OnClick = Button3Click
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 24
        Width = 390
        Height = 181
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 0
        object ChartGrid1: TChartGrid
          Left = 0
          Top = 0
          Width = 390
          Height = 156
          Align = alClient
          Options = [goVertLine, goHorzLine, goRangeSelect, goDrawFocusSelected, goRowSizing, goColSizing, goEditing, goTabs, goThumbTracking]
          TabOrder = 0
          ShowColors = True
          OnSetEditText = ChartGrid1SetEditText
        end
        object ChartGridNavigator1: TChartGridNavigator
          Left = 0
          Top = 156
          Width = 390
          Height = 25
          Align = alBottom
          TabOrder = 1
          Grid = ChartGrid1
        end
      end
      object PanTop: TPanel
        Left = 0
        Top = 0
        Width = 390
        Height = 24
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 1
        object CBDataSourcestyle: TComboFlat
          Left = 4
          Top = 1
          Width = 125
          HelpContext = 178
          TabOrder = 0
          OnChange = CBDataSourcestyleChange
          Items.Strings = (
            'Manual'
            'Random'
            'Series'
            'Function')
        end
        object NewDataButton: TButton
          Left = 198
          Top = 0
          Width = 56
          Height = 23
          Caption = '&New...'
          TabOrder = 1
          Visible = False
        end
        object EditDataButton: TButton
          Left = 262
          Top = 0
          Width = 56
          Height = 23
          Caption = '&Edit...'
          TabOrder = 2
          Visible = False
        end
        object DeleteDataButton: TButton
          Left = 326
          Top = 0
          Width = 56
          Height = 23
          Caption = '&Delete'
          TabOrder = 3
          Visible = False
        end
      end
      object PanelSeriesSource: TPanel
        Left = 0
        Top = 24
        Width = 390
        Height = 181
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 3
        Visible = False
        object Label5: TLabel
          Left = 24
          Top = 24
          Width = 32
          Height = 13
          Caption = '&Series:'
          FocusControl = CBSeriesSource
        end
        object CBSeriesSource: TComboFlat
          Left = 24
          Top = 40
          Width = 201
          ItemHeight = 0
          TabOrder = 0
          OnChange = CBSeriesSourceChange
        end
        object BApplySource: TButton
          Left = 24
          Top = 71
          Width = 75
          Height = 25
          Caption = '&Apply'
          Enabled = False
          TabOrder = 1
          OnClick = BApplySourceClick
        end
        object BClearSource: TButton
          Left = 128
          Top = 71
          Width = 75
          Height = 25
          Caption = '&Clear'
          Enabled = False
          TabOrder = 2
          OnClick = BClearSourceClick
        end
      end
    end
  end
  object CBPersistent: TCheckBox
    Left = 307
    Top = 27
    Width = 97
    Height = 17
    Caption = 'Persistent'
    TabOrder = 0
    Visible = False
    OnClick = CBPersistentClick
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 398
    Height = 25
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 2
    object ImageSeries: TImage
      Left = 220
      Top = 0
      Width = 24
      Height = 24
      Transparent = True
    end
    object LabelSeriesClass: TLabel
      Left = 252
      Top = 6
      Width = 130
      Height = 13
      AutoSize = False
      Transparent = True
    end
    object PaintBox1: TPaintBox
      Left = 370
      Top = 0
      Width = 20
      Height = 25
      Cursor = crHandPoint
      Align = alRight
      OnClick = PaintBox1Click
      OnPaint = PaintBox1Paint
    end
    object CBSeries: TComboFlat
      Left = 4
      Top = 2
      Width = 205
      HelpContext = 516
      DropDownCount = 16
      TabOrder = 0
      OnChange = CBSeriesChange
    end
    object Panel3: TPanel
      Left = 390
      Top = 0
      Width = 8
      Height = 25
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 1
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer1Timer
    Left = 340
    Top = 104
  end
end
