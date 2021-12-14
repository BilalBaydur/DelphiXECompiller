object BarSeriesEditor: TBarSeriesEditor
  Left = 477
  Top = 418
  AutoScroll = False
  ClientHeight = 244
  ClientWidth = 316
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 316
    Height = 244
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Format'
      object LStyle: TLabel
        Left = 10
        Top = 10
        Width = 26
        Height = 13
        Caption = 'St&yle:'
        FocusControl = CBBarStyle
      end
      object LTransp: TLabel
        Left = 12
        Top = 171
        Width = 68
        Height = 13
        Alignment = taRightJustify
        Caption = '&Transparency:'
        FocusControl = TBTransp
      end
      object CBBarStyle: TComboFlat
        Left = 10
        Top = 24
        Width = 111
        HelpContext = 96
        DropDownCount = 9
        TabOrder = 0
        OnChange = CBBarStyleChange
        Items.Strings = (
          'Rectangle'
          'Pyramid'
          'Invert. Pyramid'
          'Cylinder'
          'Ellipse'
          'Arrow'
          'Rect. Gradient'
          'Cone'
          'Bevel'
          'Slant Cube'
          'Diamond'
          'Invert. Arrow'
          'Invert. Cone'
          'Custom'
          'Round Rectangle')
      end
      object BBarBrush: TButton
        Left = 144
        Top = 4
        Width = 100
        Height = 25
        HelpContext = 93
        Caption = '&Pattern...'
        TabOrder = 1
        OnClick = BBarBrushClick
      end
      object GroupBox2: TGroupBox
        Left = 12
        Top = 57
        Width = 109
        Height = 65
        TabOrder = 2
        object CBColorEach: TCheckBox
          Left = 8
          Top = 12
          Width = 96
          Height = 17
          HelpContext = 164
          Caption = 'Color &Each'
          TabOrder = 0
          OnClick = CBColorEachClick
        end
        object BBarColor: TButtonColor
          Left = 8
          Top = 32
          HelpContext = 421
          Caption = '&Color...'
          TabOrder = 1
        end
      end
      object BGradient: TButton
        Left = 144
        Top = 36
        Width = 100
        Height = 25
        HelpContext = 1372
        Caption = '&Gradient...'
        TabOrder = 3
        OnClick = BGradientClick
      end
      object BTickLines: TButtonPen
        Left = 144
        Top = 115
        Width = 100
        Caption = '&Tick lines...'
        TabOrder = 4
      end
      object CBDarkBar: TCheckBox
        Left = 144
        Top = 147
        Width = 129
        Height = 17
        HelpContext = 176
        Caption = '&Dark Bar 3D Sides'
        TabOrder = 5
        OnClick = CBDarkBarClick
      end
      object CBRelative: TCheckBox
        Left = 144
        Top = 69
        Width = 113
        Height = 17
        Caption = '&Relative Gradient'
        TabOrder = 6
        OnClick = CBRelativeClick
      end
      object TBTransp: TTrackBar
        Left = 80
        Top = 171
        Width = 89
        Height = 21
        Max = 100
        Frequency = 10
        TabOrder = 7
        ThumbLength = 12
        OnChange = TBTranspChange
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Size'
      ImageIndex = 1
      object Label1: TLabel
        Left = 74
        Top = 34
        Width = 61
        Height = 13
        Alignment = taRightJustify
        Caption = '% Bar &Width:'
        FocusControl = SEBarwidth
      end
      object Label3: TLabel
        Left = 74
        Top = 60
        Width = 61
        Height = 13
        Alignment = taRightJustify
        Caption = '% Bar O&ffset:'
        FocusControl = SEBarOffset
      end
      object Label2: TLabel
        Left = 73
        Top = 8
        Width = 62
        Height = 13
        Alignment = taRightJustify
        Caption = '% Bar &Depth:'
        FocusControl = Edit1
      end
      object SEBarwidth: TEdit
        Left = 137
        Top = 30
        Width = 32
        Height = 21
        HelpContext = 98
        TabOrder = 0
        Text = '1'
        OnChange = SEBarwidthChange
      end
      object SEBarOffset: TEdit
        Left = 137
        Top = 56
        Width = 32
        Height = 21
        HelpContext = 307
        TabOrder = 1
        Text = '0'
        OnChange = SEBarOffsetChange
      end
      object UDBarWidth: TUpDown
        Left = 169
        Top = 30
        Width = 15
        Height = 21
        HelpContext = 98
        Associate = SEBarwidth
        Min = 1
        Increment = 5
        Position = 1
        TabOrder = 2
      end
      object UDBarOffset: TUpDown
        Left = 169
        Top = 56
        Width = 15
        Height = 21
        HelpContext = 307
        Associate = SEBarOffset
        Min = -100
        Increment = 5
        TabOrder = 3
      end
      object Edit1: TEdit
        Left = 137
        Top = 4
        Width = 32
        Height = 21
        HelpContext = 98
        TabOrder = 4
        Text = '1'
        OnChange = Edit1Change
      end
      object UDDepth: TUpDown
        Left = 169
        Top = 4
        Width = 15
        Height = 21
        HelpContext = 98
        Associate = Edit1
        Min = 1
        Increment = 5
        Position = 1
        TabOrder = 5
      end
      object CBBarSideMargins: TCheckBox
        Left = 8
        Top = 86
        Width = 150
        Height = 17
        HelpContext = 435
        Caption = 'Bar S&ide Margins'
        TabOrder = 6
        OnClick = CBBarSideMarginsClick
      end
      object CBMarksAutoPosition: TCheckBox
        Left = 8
        Top = 108
        Width = 150
        Height = 17
        HelpContext = 78
        Caption = '&Auto Mark Position'
        TabOrder = 7
        OnClick = CBMarksAutoPositionClick
      end
      object GroupBox1: TGroupBox
        Left = 8
        Top = 132
        Width = 141
        Height = 57
        TabOrder = 8
        object Llocation: TLabel
          Left = 8
          Top = 32
          Width = 44
          Height = 13
          Caption = '&Location:'
          FocusControl = cbLocation
        end
        object cbMarksOnBar: TCheckBox
          Left = 6
          Top = 10
          Width = 97
          Height = 17
          Caption = '&Marks on Bar'
          TabOrder = 0
          OnClick = cbMarksOnBarClick
        end
        object cbLocation: TComboFlat
          Left = 60
          Top = 28
          Width = 74
          ItemIndex = 2
          TabOrder = 1
          Text = 'End'
          OnChange = cbLocationChange
          Items.Strings = (
            'Start'
            'Center'
            'End')
        end
      end
    end
    object TabShadow: TTabSheet
      Caption = 'Shadow'
      ImageIndex = 2
    end
    object TabEmboss: TTabSheet
      Caption = 'Emboss'
      ImageIndex = 4
    end
    object TabSheet3: TTabSheet
      Caption = 'Border'
      ImageIndex = 3
      object LBevel: TLabel
        Left = 35
        Top = 75
        Width = 51
        Height = 13
        Alignment = taRightJustify
        Caption = 'Be&vel size:'
        FocusControl = EBevel
      end
      object Label4: TLabel
        Left = 27
        Top = 51
        Width = 60
        Height = 13
        Alignment = taRightJustify
        Caption = 'Dark Border:'
      end
      object BBarPen: TButtonPen
        Left = 13
        Top = 12
        HelpContext = 95
        Caption = '&Border...'
        TabOrder = 0
      end
      object EBevel: TEdit
        Left = 91
        Top = 72
        Width = 39
        Height = 21
        HelpContext = 98
        TabOrder = 1
        Text = '1'
        OnChange = EBevelChange
      end
      object UDBevel: TUpDown
        Left = 130
        Top = 72
        Width = 15
        Height = 21
        HelpContext = 98
        Associate = EBevel
        Position = 1
        TabOrder = 2
      end
      object Edit2: TEdit
        Left = 91
        Top = 48
        Width = 39
        Height = 21
        HelpContext = 1090
        TabOrder = 3
        Text = '255'
        OnChange = Edit2Change
      end
      object UDDarkPen: TUpDown
        Left = 130
        Top = 48
        Width = 15
        Height = 21
        HelpContext = 1090
        Associate = Edit2
        Max = 255
        Increment = 5
        Position = 255
        TabOrder = 4
      end
      object GroupBox3: TGroupBox
        Left = 10
        Top = 95
        Width = 183
        Height = 106
        TabOrder = 5
        object Label5: TLabel
          Left = 30
          Top = 71
          Width = 23
          Height = 13
          Alignment = taRightJustify
          Caption = 'Siz&e:'
          Enabled = False
          FocusControl = ERoundSize
        end
        object Label6: TLabel
          Left = 26
          Top = 43
          Width = 26
          Height = 13
          Caption = 'St&yle:'
          Enabled = False
          FocusControl = cbBarRound
        end
        object CBRound: TCheckBox
          Left = 8
          Top = 12
          Width = 132
          Height = 17
          HelpContext = 1465
          Caption = '&Round'
          TabOrder = 0
          OnClick = CBRoundClick
        end
        object ERoundSize: TEdit
          Left = 59
          Top = 67
          Width = 29
          Height = 21
          HelpContext = 1906
          Enabled = False
          TabOrder = 1
          Text = '1'
          OnChange = ERoundSizeChange
        end
        object UDRoundSize: TUpDown
          Left = 88
          Top = 67
          Width = 16
          Height = 21
          HelpContext = 1906
          Associate = ERoundSize
          Enabled = False
          Max = 500
          Position = 1
          TabOrder = 2
        end
        object cbBarRound: TComboFlat
          Left = 59
          Top = 40
          Width = 110
          HelpContext = 96
          DropDownCount = 9
          Enabled = False
          ItemIndex = 1
          TabOrder = 3
          Text = 'At Value'
          OnChange = cbBarRoundChange
          Items.Strings = (
            'None'
            'At Value'
            'Both Ends')
        end
      end
    end
  end
end
