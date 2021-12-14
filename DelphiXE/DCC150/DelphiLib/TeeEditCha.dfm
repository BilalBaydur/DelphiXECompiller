object ChartEditForm: TChartEditForm
  Left = 258
  Top = 173
  Width = 543
  Height = 375
  HelpContext = 726
  ActiveControl = MainPage
  BorderIcons = [biSystemMenu]
  Color = clBtnFace
  ParentFont = True
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000000020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000AAAAAA000000000000000000000000B0AAAAAAAA000000000000000
    00000BBBB0AAAAAAA0C000000000000000000BBBB0AAAAAA0CC0000000000000
    0000BBBBBB0AAAA0CCCC0000000000000000BBBBBB0AAA0CCCCCC00000000000
    000BBBBBBBB0A0CCCCCCC00000000000000BBBBBBBBB0CCCCCCCC00000000000
    000BBBBBBBB00CCCCCCCC00000000000000BBBBBBB0990CCCCCCC00000000000
    000BBBBBBB09990CCCCCC000000000000000BBBBB0999990CCCC000000000000
    0000BBBBB09999990CCC00000000000000000BBB0999999990C0000000000000
    00000BBB09999999990000000000000000000000999999999000000000000000
    0000000009999990000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000FFFF
    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF01FFFFFE007FFFF8001FFFF00
    00FFFF0000FFFE00007FFE00003FFC00003FFC00003FFC00003FFC00003FFC00
    003FFE00007FFE00007FFF0000FFFF0000FFFF8001FFFFE007FFFFF81FFFFFFF
    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
  OldCreateOrder = True
  Position = poScreenCenter
  ShowHint = True
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object TreeSplitter: TSplitter
    Left = 126
    Top = 0
    Height = 303
    Visible = False
  end
  object MainPage: TPageControl
    Left = 129
    Top = 0
    Width = 398
    Height = 303
    ActivePage = TabChart
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = MainPageChange
    OnChanging = MainPageChanging
    object TabChart: TTabSheet
      Caption = 'Chart'
      object SubPage: TPageControl
        Left = 0
        Top = 0
        Width = 390
        Height = 275
        HelpContext = 726
        ActivePage = TabSeriesList
        Align = alClient
        HotTrack = True
        TabOrder = 0
        OnChange = SubPageChange
        OnChanging = SubPageChanging
        object TabSeriesList: TTabSheet
          Caption = 'Series'
          object Splitter1: TSplitter
            Left = 123
            Top = 25
            Height = 210
            Visible = False
          end
          object PanRight: TPanel
            Left = 282
            Top = 25
            Width = 100
            Height = 210
            Align = alRight
            BevelOuter = bvNone
            TabOrder = 0
            object BMoveUP: TSpeedButton
              Left = 20
              Top = 0
              Width = 27
              Height = 25
              Flat = True
              NumGlyphs = 2
              OnClick = BMoveUPClick
            end
            object BMoveDown: TSpeedButton
              Left = 52
              Top = 0
              Width = 27
              Height = 25
              Flat = True
              NumGlyphs = 2
              OnClick = BMoveDownClick
            end
            object BAddSeries: TButton
              Left = 12
              Top = 34
              Width = 75
              Height = 25
              HelpContext = 33
              Caption = '&Add...'
              TabOrder = 0
              OnClick = BAddSeriesClick
            end
            object BDeleteSeries: TButton
              Left = 12
              Top = 67
              Width = 75
              Height = 25
              HelpContext = 405
              Caption = '&Delete'
              TabOrder = 1
              OnClick = BDeleteSeriesClick
            end
            object BRenameSeries: TButton
              Left = 12
              Top = 100
              Width = 75
              Height = 25
              HelpContext = 651
              Caption = '&Title...'
              TabOrder = 2
              OnClick = BRenameSeriesClick
            end
            object BCloneSeries: TButton
              Left = 12
              Top = 133
              Width = 75
              Height = 25
              HelpContext = 780
              Caption = 'C&lone'
              TabOrder = 3
              OnClick = BCloneSeriesClick
            end
            object BChangeTypeSeries: TButton
              Left = 12
              Top = 166
              Width = 75
              Height = 25
              HelpContext = 32
              Caption = '&Change...'
              TabOrder = 4
              OnClick = BChangeTypeSeriesClick
            end
          end
          object PanTop: TPanel
            Left = 0
            Top = 0
            Width = 382
            Height = 25
            Align = alTop
            BevelOuter = bvNone
            TabOrder = 1
            object BAddGroup: TSpeedButton
              Left = 25
              Top = 2
              Width = 23
              Height = 22
              Caption = '+'
              Flat = True
              OnClick = BAddGroupClick
            end
            object BDeleteGroup: TSpeedButton
              Left = 53
              Top = 2
              Width = 23
              Height = 22
              Caption = '-'
              Enabled = False
              Flat = True
              OnClick = BDeleteGroupClick
            end
            object BRenameGroup: TSpeedButton
              Left = 82
              Top = 2
              Width = 23
              Height = 22
              Caption = '...'
              Enabled = False
              Flat = True
              OnClick = BRenameGroupClick
            end
            object SpeedSeries: TSpeedButton
              Left = 130
              Top = 0
              Width = 73
              Height = 25
              GroupIndex = 1
              Caption = 'View'
              Flat = True
              Glyph.Data = {
                36030000424D3603000000000000360000002800000010000000100000000100
                1800000000000003000000000000000000000000000000000000C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4000000C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D400
                0000000000000000C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4000000000000000000000000000000C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4
                C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0
                D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8
                D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4}
              Layout = blGlyphRight
              OnMouseDown = SpeedSeriesMouseDown
            end
          end
          object PanBot: TPanel
            Left = 0
            Top = 235
            Width = 382
            Height = 12
            Align = alBottom
            BevelOuter = bvNone
            TabOrder = 2
          end
          object PanLeft: TPanel
            Left = 0
            Top = 25
            Width = 11
            Height = 210
            Align = alLeft
            BevelOuter = bvNone
            TabOrder = 4
          end
          object PanelGroups: TPanel
            Left = 11
            Top = 25
            Width = 112
            Height = 210
            Align = alLeft
            BevelOuter = bvNone
            TabOrder = 3
            Visible = False
            object Groups: TCheckListBox
              Left = 0
              Top = 0
              Width = 112
              Height = 210
              Align = alClient
              ItemHeight = 13
              TabOrder = 0
              OnClick = GroupsClick
              OnDragDrop = GroupsDragDrop
              OnDragOver = GroupsDragOver
            end
          end
          object LBSeries: TChartListBox
            Left = 126
            Top = 25
            Width = 156
            Height = 210
            OnDblClickSeries = LBSeriesEditSeries
            OnOtherItemsChange = LBSeriesOtherItemsChange
            OnRefresh = LBSeriesRefreshButtons
            OnRemovedSeries = LBSeriesRemovedSeries
            Align = alClient
            ItemHeight = 24
            TabOrder = 5
            OnClick = LBSeriesRefreshButtons
          end
        end
        object TabGeneral: TTabSheet
          Caption = 'General'
        end
        object TabAxis: TTabSheet
          Caption = 'Axis'
        end
        object TabTitle: TTabSheet
          HelpContext = 527
          Caption = 'Titles'
        end
        object TabLegend: TTabSheet
          Caption = 'Legend'
        end
        object TabPanel: TTabSheet
          HelpContext = 371
          Caption = 'Panel'
        end
        object TabPaging: TTabSheet
          HelpContext = 364
          Caption = 'Paging'
        end
        object TabWalls: TTabSheet
          HelpContext = 347
          Caption = 'Walls'
        end
        object Tab3D: TTabSheet
          Caption = '3D'
        end
      end
    end
    object TabSeries: TTabSheet
      Caption = 'Series'
    end
    object TabData: TTabSheet
      HelpContext = 1473
      Caption = 'Data'
      object ChartGrid1: TChartGrid
        Left = 0
        Top = 0
        Width = 398
        Height = 236
        HelpContext = 1473
        Align = alClient
        Options = [goVertLine, goHorzLine, goRangeSelect, goDrawFocusSelected, goRowSizing, goColSizing, goEditing, goTabs, goThumbTracking]
        PopupMenu = PopupData
        TabOrder = 0
        ShowColors = True
      end
      object Panel1: TPanel
        Left = 0
        Top = 236
        Width = 398
        Height = 22
        Align = alBottom
        BevelOuter = bvNone
        TabOrder = 1
        object ChartGridNavigator1: TChartGridNavigator
          Left = 0
          Top = 0
          Width = 252
          Height = 22
          HelpContext = 1924
          Align = alClient
          TabOrder = 0
          TabStop = True
          Grid = ChartGrid1
        end
        object Panel2: TPanel
          Left = 252
          Top = 0
          Width = 146
          Height = 22
          Align = alRight
          BevelOuter = bvNone
          TabOrder = 1
          object SBGridText: TSpeedButton
            Left = 5
            Top = 0
            Width = 23
            Height = 22
            Hint = 'Show labels'
            AllowAllUp = True
            GroupIndex = 1
            Flat = True
            Glyph.Data = {
              76010000424D7601000000000000760000002800000020000000100000000100
              0400000000000001000000000000000000001000000010000000000000000000
              800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
              FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
              3333333333333333333333333333333333333333FFF33FFFFF33333300033000
              00333337773377777333333330333300033333337FF33777F333333330733300
              0333333377FFF777F33333333700000073333333777777773333333333033000
              3333333337FF777F333333333307300033333333377F777F3333333333703007
              33333333377F7773333333333330000333333333337777F33333333333300003
              33333333337777F3333333333337007333333333337777333333333333330033
              3333333333377333333333333333033333333333333733333333333333333333
              3333333333333333333333333333333333333333333333333333}
            NumGlyphs = 2
            OnClick = SBGridTextClick
          end
          object SBGridCol: TSpeedButton
            Left = 29
            Top = 0
            Width = 23
            Height = 22
            Hint = 'Show colors'
            AllowAllUp = True
            GroupIndex = 2
            Flat = True
            Glyph.Data = {
              76010000424D7601000000000000760000002800000020000000100000000100
              0400000000000001000000000000000000001000000010000000000000000000
              8000008000000080800080000000800080008080000080808000C0C0C0000000
              FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00DDDD8888BBBB
              99998888FFFF8888FFFFDDDD8888BBBB99998888FFFF8888FFFFDDDD8888BBBB
              99998888FFFF8888FFFFDDDD8888BBBB99998888FFFF8888FFFF4444FFFF1111
              3333FFFF8888FFFF88884444FFFF11113333FFFF8888FFFF88884444FFFF1111
              3333FFFF8888FFFF88884444FFFF11113333FFFF8888FFFF888888885555EEEE
              CCCC8888FFFF8888FFFF88885555EEEECCCC8888FFFF8888FFFF88885555EEEE
              CCCC8888FFFF8888FFFF88885555EEEECCCC8888FFFF8888FFFF9999BBBB1111
              AAAAFFFF8888FFFF88889999BBBB1111AAAAFFFF8888FFFF88889999BBBB1111
              AAAAFFFF8888FFFF88889999BBBB1111AAAAFFFF8888FFFF8888}
            NumGlyphs = 2
            OnClick = SBGridColClick
          end
          object SBGrid3D: TSpeedButton
            Left = 53
            Top = 0
            Width = 23
            Height = 22
            Hint = 'XYZ series'
            AllowAllUp = True
            GroupIndex = 3
            Flat = True
            Glyph.Data = {
              76010000424D7601000000000000760000002800000020000000100000000100
              0400000000000001000000000000000000001000000010000000000000000000
              8000008000000080800080000000800080008080000080808000C0C0C0000000
              FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00FFFFFFFFFFFF
              FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
              FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCCC7FCCC
              C7FFFFF888FF88888FFFFFFC7FFCFC7FFC7FFF8FFF8F8FFFF8FFFFFFFFFCFCFF
              FFC7FFFFFF8F8FFFF88FFFFFFFFCFCFFFFC7FFFFFF8F8FFFF88FFFFFFCC7FCFF
              FFC7FFFF88FF8FFFF88FFFFFFFFCFCFFFFC7FFFFFF8F8FFFF88FFFFFFFFCFCFF
              FFC7FFFFFF8F8FFFF88FFFFC7FFCFC7FFC7FFF8FFF8F8FFFF8FFFFFFCCC7FCCC
              C7FFFFF888FF88888FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
              FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
            NumGlyphs = 2
            OnClick = SBGrid3DClick
          end
          object SBGridX: TSpeedButton
            Left = 77
            Top = 0
            Width = 23
            Height = 22
            Hint = 'Show X values'
            AllowAllUp = True
            GroupIndex = 4
            Flat = True
            Glyph.Data = {
              76010000424D7601000000000000760000002800000020000000100000000100
              0400000000000001000000000000000000001000000010000000000000000000
              8000008000000080800080000000800080008080000080808000C0C0C0000000
              FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
              3333333333333333333333333333333333333333333333333333333300733333
              00333333FF733333FF33333330073330073333333FF7333FF733333333003300
              7333333333FF33FF73333333330073003333333333FF73FF3333333333300007
              33333333333FFFF73333333333330033333333333333FF333333333333300007
              33333333333FFFF733333333330073003333333333FF73FF3333333333003300
              7333333333FF33FF7333333330073330073333333FF7333FF733333300733330
              00333333FF73333FFF3333333333333333333333333333333333333333333333
              3333333333333333333333333333333333333333333333333333}
            NumGlyphs = 2
            OnClick = SBGridXClick
          end
          object SBCopyData: TSpeedButton
            Left = 100
            Top = 0
            Width = 23
            Height = 22
            Hint = 'Copy'
            AllowAllUp = True
            Flat = True
            Glyph.Data = {
              36030000424D3603000000000000360000002800000010000000100000000100
              1800000000000003000000000000000000000000000000000000C8D0D4C8D0D4
              C8D0D4C8D0D4C8D0D4A0756E7443427443427443427443427443427443427443
              42744342744342C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4A0756EFFF8E5F7
              EDD9F7EBD5F4E9D1F4E9D0F4E7CFF6EAD0EEDDC4754443C8D0D4C8D0D4C8D0D4
              C8D0D4C8D0D4C8D0D4A0756EF7EDDCF2D9BFF2D7BBF0D5BAEFD4B5EED3B2EED9
              BFE5D0BA754443C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4A0756EFAEFDEFC
              C591FCC591FCC591FCC591FCC591FCC591E3D1BC754443C8D0D4C8D0D4A0756E
              744342744342744342A0756EFCF4E7F6D9BAF7D7B6F6D4B5F6D4B2F4D1ADF0DC
              C2E6D3C081524CC8D0D4C8D0D4A0756EFFF8E5F7EDD9F7EBD5A0756EFEF6EBF8
              DABCF8D9B8F8D8B7F7D5B6F7D4B2F3DEC7E7D7C581524DC8D0D4C8D0D4A0756E
              F7EDDCF2D9BFF2D7BBA0756EFEFAF2FCC591FCC591FCC591FCC591FCC591FCC5
              91EBDDCF8F5F5AC8D0D4C8D0D4A0756EFAEFDEFCC591FCC591A0756EFFFCFAFC
              E3CCFBE0C7FADEC6F8DEC4FCE2C6FCF0DEE1D7CE8F5E59C8D0D4C8D0D4A0756E
              FCF4E7F6D9BAF7D7B6A0756EFFFFFFFEFFFFFBFBFBFAF8F7FAFAF6E5D5D0C6B1
              AFA793959E675AC8D0D4C8D0D4A0756EFEF6EBF8DABCF8D9B8A0756EFFFFFFFF
              FFFFFFFEFEFFFCF8FFFEFAA0756EA0756EA0756EA0756EC8D0D4C8D0D4A0756E
              FEFAF2FCC591FCC591A0756EFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA0756EE5A1
              54B6735DC8D0D4C8D0D4C8D0D4A0756EFFFCFAFCE3CCFBE0C7A0756EA0756EA0
              756EA0756EA0756EA0756EA0756EAA6D68C8D0D4C8D0D4C8D0D4C8D0D4A0756E
              FFFFFFFEFFFFFBFBFBFAF8F7FAFAF6E5D5D0C6B1AFA793959E675AC8D0D4C8D0
              D4C8D0D4C8D0D4C8D0D4C8D0D4A0756EFFFFFFFFFFFFFFFEFEFFFCF8FFFEFAA0
              756EA0756EA0756EA0756EC8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4A0756E
              FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA0756EE5A154B6735DC8D0D4C8D0D4C8D0
              D4C8D0D4C8D0D4C8D0D4C8D0D4A0756EA0756EA0756EA0756EA0756EA0756EA0
              756EAA6D68C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4}
            OnClick = SBCopyDataClick
          end
          object SBGridVisuals: TSpeedButton
            Left = 123
            Top = 0
            Width = 23
            Height = 22
            Hint = 'Show Visuals'
            AllowAllUp = True
            GroupIndex = 5
            Caption = 'V'
            Flat = True
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentFont = False
            OnClick = SBGridVisualsClick
          end
        end
      end
    end
    object TabTools: TTabSheet
      Caption = 'Tools'
    end
    object TabAnimations: TTabSheet
      Caption = 'Animations'
    end
    object TabExport: TTabSheet
      Caption = 'Export'
    end
    object TabPrint: TTabSheet
      Caption = 'Print'
    end
  end
  object PanBottom: TPanel
    Left = 0
    Top = 303
    Width = 527
    Height = 34
    Align = alBottom
    TabOrder = 1
    object LabelWWW: TLabel
      Left = 112
      Top = 10
      Width = 193
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'www.Steema.com'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsUnderline]
      ParentFont = False
      OnClick = LabelWWWClick
    end
    object ButtonHelp: TButton
      Left = 26
      Top = 4
      Width = 75
      Height = 25
      Caption = '&Help...'
      TabOrder = 0
      OnClick = ButtonHelpClick
    end
    object PanClose: TPanel
      Left = 419
      Top = 1
      Width = 107
      Height = 32
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 1
      object BClose: TButton
        Left = 11
        Top = 4
        Width = 75
        Height = 25
        Cancel = True
        Caption = 'Close'
        Default = True
        TabOrder = 0
        OnClick = BCloseClick
      end
    end
  end
  object Tree: TTreeView
    Left = 0
    Top = 0
    Width = 126
    Height = 303
    Align = alLeft
    Ctl3D = False
    HideSelection = False
    Indent = 19
    ParentCtl3D = False
    TabOrder = 2
    Visible = False
    OnChange = TreeChange
    OnEditing = TreeEditing
  end
  object PopupData: TPopupMenu
    OnPopup = PopupDataPopup
    Left = 196
    Top = 72
    object EditColor1: TMenuItem
      Caption = '&Edit Color...'
      OnClick = EditColor1Click
    end
    object DefaultColor1: TMenuItem
      Caption = 'Default &Color'
      OnClick = DefaultColor1Click
    end
    object Makenullpoint1: TMenuItem
      Caption = 'Make &null point'
      OnClick = Makenullpoint1Click
    end
    object N1: TMenuItem
      Caption = '-'
    end
    object Insertrow1: TMenuItem
      Caption = '&Append row'
      OnClick = Insertrow1Click
    end
    object Deleterow1: TMenuItem
      Caption = '&Delete row'
      OnClick = Deleterow1Click
    end
    object N2: TMenuItem
      Caption = '-'
    end
    object extfont1: TMenuItem
      Caption = '&Text font...'
      OnClick = extfont1Click
    end
  end
  object PopupSeries: TPopupMenu
    Left = 329
    Top = 88
    object ViewSeriesNames1: TMenuItem
      Caption = 'View Series &Names'
      OnClick = ViewSeriesNames1Click
    end
    object ViewSeriesGroups1: TMenuItem
      Caption = 'View Series &Groups'
      OnClick = ViewSeriesGroups1Click
    end
  end
end
