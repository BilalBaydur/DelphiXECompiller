object PieSeriesEditor: TPieSeriesEditor
  Left = 317
  Top = 261
  Width = 395
  Height = 248
  BorderIcons = [biSystemMenu]
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
    Width = 387
    Height = 221
    ActivePage = TabOptions
    Align = alClient
    TabOrder = 0
    object TabOptions: TTabSheet
      Caption = 'Options'
      object Label4: TLabel
        Left = 40
        Top = 11
        Width = 78
        Height = 13
        Alignment = taRightJustify
        Caption = '&Explode biggest:'
        FocusControl = SEExpBig
      end
      object Label2: TLabel
        Left = 63
        Top = 38
        Width = 56
        Height = 13
        Alignment = taRightJustify
        Caption = 'Total angle:'
      end
      object Label1: TLabel
        Left = 59
        Top = 67
        Width = 60
        Height = 13
        Alignment = taRightJustify
        Caption = 'Dar&k Border:'
        FocusControl = Edit2
      end
      object Label3: TLabel
        Left = 56
        Top = 96
        Width = 62
        Height = 13
        Alignment = taRightJustify
        Caption = '&Multiple Pies:'
      end
      object LTransparency: TLabel
        Left = 240
        Top = 11
        Width = 68
        Height = 13
        Alignment = taRightJustify
        Caption = '&Transparency:'
        FocusControl = SEExpBig
      end
      object LBevelPercent: TLabel
        Left = 220
        Top = 38
        Width = 88
        Height = 13
        Alignment = taRightJustify
        Caption = '&Bevel Percentage:'
        FocusControl = SEExpBig
      end
      object LEdgeStyle: TLabel
        Left = 64
        Top = 123
        Width = 54
        Height = 13
        Alignment = taRightJustify
        Caption = 'E&dge Style:'
      end
      object CBDark3d: TCheckBox
        Left = 272
        Top = 95
        Width = 124
        Height = 17
        HelpContext = 1489
        Caption = '&Dark 3D'
        TabOrder = 0
        OnClick = CBDark3dClick
      end
      object SEExpBig: TEdit
        Left = 121
        Top = 8
        Width = 39
        Height = 21
        HelpContext = 756
        TabOrder = 1
        Text = '0'
        OnChange = SEExpBigChange
      end
      object UDExpBig: TUpDown
        Left = 160
        Top = 8
        Width = 15
        Height = 21
        HelpContext = 756
        Associate = SEExpBig
        Increment = 5
        TabOrder = 2
      end
      object CBPatterns: TCheckBox
        Left = 272
        Top = 117
        Width = 105
        Height = 17
        HelpContext = 664
        Caption = 'Pa&tterns'
        TabOrder = 3
        OnClick = CBPatternsClick
      end
      object BPen: TButtonPen
        Left = 290
        Top = 62
        HelpContext = 850
        Caption = '&Border...'
        TabOrder = 4
      end
      object Edit1: TEdit
        Left = 121
        Top = 35
        Width = 39
        Height = 21
        HelpContext = 1090
        TabOrder = 5
        Text = '360'
        OnChange = Edit1Change
      end
      object UDAngleSize: TUpDown
        Left = 160
        Top = 35
        Width = 15
        Height = 21
        HelpContext = 1090
        Associate = Edit1
        Min = 1
        Max = 360
        Increment = 5
        Position = 360
        TabOrder = 6
      end
      object Edit2: TEdit
        Left = 121
        Top = 64
        Width = 39
        Height = 21
        HelpContext = 1090
        TabOrder = 7
        Text = '255'
        OnChange = Edit2Change
      end
      object UpDown1: TUpDown
        Left = 160
        Top = 64
        Width = 15
        Height = 21
        HelpContext = 1090
        Associate = Edit2
        Max = 255
        Increment = 5
        Position = 255
        TabOrder = 8
      end
      object CBMultiple: TComboFlat
        Left = 121
        Top = 93
        Width = 145
        TabOrder = 9
        OnChange = CBMultipleChange
        Items.Strings = (
          'Automatic'
          'Disable')
      end
      object Edit3: TEdit
        Left = 312
        Top = 8
        Width = 39
        Height = 21
        TabOrder = 10
        Text = '0'
        OnChange = Edit3Change
      end
      object Edit4: TEdit
        Left = 312
        Top = 35
        Width = 39
        Height = 21
        TabOrder = 11
        Text = '0'
        OnChange = Edit4Change
      end
      object CBEdgeStyle: TComboFlat
        Left = 121
        Top = 120
        Width = 145
        TabOrder = 12
        OnChange = CBEdgeStyleChange
        Items.Strings = (
          'None'
          'Flat'
          'Curved')
      end
      object UDTransparency: TUpDown
        Left = 351
        Top = 8
        Width = 15
        Height = 21
        HelpContext = 1090
        Associate = Edit3
        TabOrder = 13
      end
      object UDBevelPercent: TUpDown
        Left = 351
        Top = 35
        Width = 15
        Height = 21
        HelpContext = 1090
        Associate = Edit4
        TabOrder = 14
      end
    end
    object TabGroup: TTabSheet
      Caption = 'Group Slices'
      ImageIndex = 1
      object Label5: TLabel
        Left = 60
        Top = 13
        Width = 26
        Height = 13
        Alignment = taRightJustify
        Caption = '&Style:'
        FocusControl = CBOther
      end
      object Label6: TLabel
        Left = 56
        Top = 38
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Value:'
        FocusControl = EOtherValue
      end
      object Label7: TLabel
        Left = 57
        Top = 63
        Width = 29
        Height = 13
        Alignment = taRightJustify
        Caption = '&Label:'
        FocusControl = EOtherLabel
      end
      object CBOther: TComboFlat
        Left = 90
        Top = 10
        Width = 99
        HelpContext = 758
        TabOrder = 0
        OnChange = CBOtherChange
        Items.Strings = (
          'None'
          'Below %'
          'Below Value')
      end
      object EOtherValue: TEdit
        Left = 90
        Top = 35
        Width = 65
        Height = 21
        HelpContext = 760
        TabOrder = 1
        Text = '0'
        OnChange = EOtherValueChange
      end
      object EOtherLabel: TEdit
        Left = 90
        Top = 60
        Width = 99
        Height = 21
        HelpContext = 759
        TabOrder = 2
        Text = 'Other'
        OnChange = EOtherLabelChange
      end
      object Button2: TButton
        Left = 90
        Top = 90
        Width = 75
        Height = 25
        HelpContext = 1932
        Caption = 'Le&gend...'
        TabOrder = 3
        OnClick = Button2Click
      end
    end
    object TabSheet1: TTabSheet
      Caption = 'Colors'
      ImageIndex = 2
      object Label9: TLabel
        Left = 16
        Top = 40
        Width = 62
        Height = 13
        Caption = 'C&olor palette:'
        FocusControl = CBPalette
      end
      object CBColorEach: TCheckBox
        Left = 16
        Top = 16
        Width = 177
        Height = 17
        Caption = 'Color &Each slice'
        TabOrder = 0
        OnClick = CBColorEachClick
      end
      object BColor: TButtonColor
        Left = 16
        Top = 88
        Caption = '&Color...'
        TabOrder = 1
      end
      object CBPalette: TComboFlat
        Left = 16
        Top = 56
        Width = 145
        TabOrder = 2
        OnChange = CBPaletteChange
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Marks'
      ImageIndex = 3
      object Label8: TLabel
        Left = 8
        Top = 56
        Width = 77
        Height = 13
        Caption = 'Callout Leg &size:'
        FocusControl = SBLegSize
      end
      object CBMarksAutoPosition: TCheckBox
        Left = 7
        Top = 5
        Width = 153
        Height = 17
        HelpContext = 78
        Caption = '&Auto Mark Position'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBMarksAutoPositionClick
      end
      object CBVertCenter: TCheckBox
        Left = 7
        Top = 32
        Width = 162
        Height = 17
        Caption = '&Vertical center callout'
        TabOrder = 1
        OnClick = CBVertCenterClick
      end
      object SBLegSize: TScrollBar
        Left = 8
        Top = 72
        Width = 129
        Height = 16
        PageSize = 0
        TabOrder = 2
        OnChange = SBLegSizeChange
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Frame'
      ImageIndex = 4
      object PageControl2: TPageControl
        Left = 0
        Top = 0
        Width = 379
        Height = 193
        ActivePage = TabSheet4
        Align = alClient
        TabOrder = 0
        object TabSheet4: TTabSheet
          Caption = 'General'
          object Label11: TLabel
            Left = 24
            Top = 44
            Width = 31
            Height = 13
            Alignment = taRightJustify
            Caption = '&Width:'
            FocusControl = EWidth
          end
          object CBFrameVisible: TCheckBox
            Left = 64
            Top = 16
            Width = 97
            Height = 17
            Caption = '&Visible'
            TabOrder = 0
            OnClick = CBFrameVisibleClick
          end
          object EWidth: TEdit
            Left = 64
            Top = 40
            Width = 49
            Height = 21
            TabOrder = 1
            Text = '0'
            OnChange = EWidthChange
          end
          object UDWidth: TUpDown
            Left = 113
            Top = 40
            Width = 15
            Height = 21
            Associate = EWidth
            TabOrder = 2
          end
        end
        object TabSheet5: TTabSheet
          Caption = 'Outer'
          ImageIndex = 1
        end
        object TabSheet6: TTabSheet
          Caption = 'Middle'
          ImageIndex = 2
        end
        object TabSheet7: TTabSheet
          Caption = 'Inner'
          ImageIndex = 3
        end
      end
    end
    object TabSheet8: TTabSheet
      Caption = 'Gradient'
      ImageIndex = 5
      object Label10: TLabel
        Left = 21
        Top = 51
        Width = 73
        Height = 13
        Alignment = taRightJustify
        Caption = 'Grad&ient Bright:'
        FocusControl = TBBright
      end
      object LBright: TLabel
        Left = 204
        Top = 51
        Width = 6
        Height = 13
        Caption = '0'
      end
      object BGradient: TButtonGradient
        Left = 21
        Top = 83
        Width = 103
        Caption = '&Gradient...'
        TabOrder = 0
      end
      object TBBright: TTrackBar
        Left = 96
        Top = 51
        Width = 105
        Height = 22
        LineSize = 5
        Max = 255
        Min = -255
        Frequency = 32
        TabOrder = 1
        ThumbLength = 12
        OnChange = TBBrightChange
      end
      object CBGradVisible: TCheckBox
        Left = 22
        Top = 16
        Width = 97
        Height = 17
        Caption = '&Visible'
        TabOrder = 2
        OnClick = CBGradVisibleClick
      end
    end
  end
end
