object FormTee3D: TFormTee3D
  Left = 563
  Top = 171
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 228
  ClientWidth = 403
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
    Width = 403
    Height = 228
    ActivePage = Tab3D
    Align = alClient
    TabOrder = 0
    OnChange = PageControl1Change
    object Tab3D: TTabSheet
      Caption = 'Options'
      object L13: TLabel
        Left = 28
        Top = 30
        Width = 28
        Height = 13
        Alignment = taRightJustify
        Caption = '3&D %:'
        FocusControl = SE3d
      end
      object L4: TLabel
        Left = 181
        Top = 4
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Zoom:'
        FocusControl = SBZoom
      end
      object L35: TLabel
        Left = 171
        Top = 32
        Width = 43
        Height = 13
        Alignment = taRightJustify
        Caption = '&Rotation:'
        FocusControl = SBRotation
      end
      object L36: TLabel
        Left = 168
        Top = 59
        Width = 47
        Height = 13
        Alignment = taRightJustify
        Caption = 'E&levation:'
        FocusControl = SBElevation
      end
      object LZoom: TLabel
        Left = 348
        Top = 4
        Width = 26
        Height = 13
        Caption = '100%'
      end
      object LRotation: TLabel
        Left = 348
        Top = 33
        Width = 18
        Height = 13
        Caption = '360'
      end
      object LElevation: TLabel
        Left = 348
        Top = 60
        Width = 18
        Height = 13
        Caption = '360'
      end
      object Label1: TLabel
        Left = 152
        Top = 94
        Width = 61
        Height = 13
        Alignment = taRightJustify
        Caption = '&Horiz. Offset:'
        FocusControl = SBHOffset
      end
      object LHOffset: TLabel
        Left = 348
        Top = 95
        Width = 6
        Height = 13
        Caption = '0'
      end
      object Label3: TLabel
        Left = 157
        Top = 118
        Width = 56
        Height = 13
        Alignment = taRightJustify
        Caption = '&Vert. Offset:'
        FocusControl = SBVOffset
      end
      object LVOffset: TLabel
        Left = 348
        Top = 119
        Width = 6
        Height = 13
        Caption = '0'
      end
      object Label2: TLabel
        Left = 156
        Top = 146
        Width = 59
        Height = 13
        Alignment = taRightJustify
        Caption = '&Perspective:'
        FocusControl = SBPerspec
      end
      object LPerspec: TLabel
        Left = 347
        Top = 149
        Width = 6
        Height = 13
        Caption = '0'
      end
      object Label4: TLabel
        Left = 26
        Top = 84
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Angle:'
        FocusControl = EOrthoAngle
      end
      object LTextSize: TLabel
        Left = 184
        Top = 173
        Width = 8
        Height = 13
        Caption = '%'
      end
      object CBView3d: TCheckBox
        Left = 9
        Top = 3
        Width = 112
        Height = 17
        HelpContext = 675
        Caption = '&3 Dimensions'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBView3dClick
      end
      object SE3d: TEdit
        Left = 62
        Top = 26
        Width = 35
        Height = 21
        HelpContext = 140
        TabOrder = 1
        Text = '15'
        OnChange = SE3dChange
      end
      object CBOrthogonal: TCheckBox
        Left = 9
        Top = 60
        Width = 104
        Height = 17
        HelpContext = 750
        Caption = '&Orthogonal'
        TabOrder = 2
        OnClick = CBOrthogonalClick
      end
      object SBZoom: TTrackBar
        Left = 215
        Top = 0
        Width = 132
        Height = 25
        HelpContext = 754
        Max = 500
        Min = 1
        PageSize = 5
        Frequency = 20
        Position = 100
        TabOrder = 3
        OnChange = SBZoomChange
      end
      object SBRotation: TTrackBar
        Left = 215
        Top = 29
        Width = 132
        Height = 25
        HelpContext = 751
        Max = 360
        PageSize = 10
        Frequency = 45
        Position = 270
        TabOrder = 4
        OnChange = SBRotationChange
      end
      object SBElevation: TTrackBar
        Left = 215
        Top = 56
        Width = 132
        Height = 25
        HelpContext = 748
        Max = 360
        Min = 270
        PageSize = 10
        Frequency = 10
        Position = 270
        TabOrder = 5
        OnChange = SBElevationChange
      end
      object SBHOffset: TTrackBar
        Left = 215
        Top = 91
        Width = 132
        Height = 25
        HelpContext = 749
        LineSize = 10
        Max = 1500
        Min = -1500
        Frequency = 250
        TabOrder = 6
        OnChange = SBHOffsetChange
      end
      object SBVOffset: TTrackBar
        Left = 215
        Top = 115
        Width = 132
        Height = 25
        HelpContext = 753
        LineSize = 10
        Max = 1500
        Min = -1500
        Frequency = 250
        TabOrder = 7
        OnChange = SBVOffsetChange
      end
      object UD3D: TUpDown
        Left = 97
        Top = 26
        Width = 15
        Height = 21
        HelpContext = 140
        Associate = SE3d
        Min = 1
        Increment = 5
        Position = 15
        TabOrder = 8
      end
      object CBZoomText: TCheckBox
        Left = 9
        Top = 171
        Width = 112
        Height = 17
        HelpContext = 773
        Caption = 'Zoom &Text'
        TabOrder = 9
        OnClick = CBZoomTextClick
      end
      object SBPerspec: TTrackBar
        Left = 215
        Top = 143
        Width = 132
        Height = 25
        HelpContext = 892
        Max = 100
        Frequency = 10
        TabOrder = 10
        OnChange = SBPerspecChange
      end
      object EOrthoAngle: TEdit
        Left = 62
        Top = 81
        Width = 35
        Height = 21
        HelpContext = 1312
        TabOrder = 11
        Text = '45'
        OnChange = EOrthoAngleChange
      end
      object UDOrthoAngle: TUpDown
        Left = 97
        Top = 81
        Width = 15
        Height = 21
        HelpContext = 1312
        Associate = EOrthoAngle
        Max = 180
        Increment = 5
        Position = 45
        TabOrder = 12
      end
      object CBClipPoints: TCheckBox
        Left = 9
        Top = 117
        Width = 102
        Height = 17
        HelpContext = 155
        Caption = '&Clip Points'
        TabOrder = 13
        OnClick = CBClipPointsClick
      end
      object ETextSize: TEdit
        Left = 124
        Top = 169
        Width = 41
        Height = 21
        TabOrder = 14
        Text = '100'
        OnChange = ETextSizeChange
      end
      object UDTextSize: TUpDown
        Left = 165
        Top = 169
        Width = 15
        Height = 21
        Associate = ETextSize
        Min = 1
        Max = 2000
        Increment = 5
        Position = 100
        TabOrder = 15
      end
    end
    object TabViews: TTabSheet
      Caption = 'Views'
      ImageIndex = 1
      object ChartGalleryPanel1: TChartGalleryPanel
        Left = 0
        Top = 0
        Width = 395
        Height = 200
        OnChangeChart = ChartGalleryPanel1ChangeChart
        Align = alClient
        BevelOuter = bvNone
        ParentColor = True
        TabOrder = 0
      end
    end
    object TabRender: TTabSheet
      Caption = 'Render'
      ImageIndex = 2
      object Splitter1: TSplitter
        Left = 105
        Top = 0
        Height = 200
      end
      object LBRender: TListBox
        Left = 0
        Top = 0
        Width = 105
        Height = 200
        Align = alLeft
        ItemHeight = 13
        TabOrder = 0
        OnClick = LBRenderClick
      end
      object PanelRender: TPanel
        Left = 108
        Top = 0
        Width = 287
        Height = 200
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 1
        object PanelGDI: TPanel
          Left = 0
          Top = 0
          Width = 287
          Height = 200
          Align = alClient
          BevelOuter = bvNone
          TabOrder = 0
          Visible = False
          object CBBuffered: TCheckBox
            Left = 16
            Top = 16
            Width = 145
            Height = 17
            Caption = '&Buffered display'
            TabOrder = 0
            OnClick = CBBufferedClick
          end
        end
      end
    end
  end
end
