inherited TeeExportForm: TTeeExportForm
  Left = 274
  Top = 284
  PixelsPerInch = 96
  TextHeight = 13
  inherited PageControl1: TPageControl
    inherited TabPicture: TTabSheet
      inherited SplitPic: TSplitter
        Left = 145
        Align = alLeft
      end
      inherited RGFormat: TGroupBox
        Width = 145
        Align = alLeft
        inherited LBFormat: TListBox
          Width = 141
        end
      end
      inherited PageOptions: TPageControl
        Left = 148
        Width = 350
        Align = alClient
      end
    end
    inherited TabData: TTabSheet
      inherited Panel4: TPanel
        inherited Panel3: TPanel
          inherited PageDataOptions: TPageControl
            object TabDataFormat: TTabSheet
              Caption = 'Format'
              ImageIndex = 2
              object Label5: TLabel
                Left = 8
                Top = 32
                Width = 65
                Height = 13
                Caption = '&Value Format:'
                FocusControl = SeriesValueFormat
              end
              object BFormat: TSpeedButton
                Left = 156
                Top = 48
                Width = 24
                Height = 21
                Caption = '...'
                Flat = True
                OnClick = BFormatClick
              end
              object CBUseSeriesFormat: TCheckBox
                Left = 8
                Top = 8
                Width = 121
                Height = 17
                Caption = 'Use Series Format'
                TabOrder = 0
                OnClick = CBUseSeriesFormatClick
              end
              object SeriesValueFormat: TComboFlat
                Left = 8
                Top = 48
                Width = 145
                Style = csDropDown
                ItemHeight = 0
                TabOrder = 1
                OnChange = SeriesValueFormatChange
              end
            end
          end
        end
      end
    end
  end
end
