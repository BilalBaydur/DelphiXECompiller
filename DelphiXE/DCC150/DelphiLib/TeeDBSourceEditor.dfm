inherited DBChartSourceEditor: TDBChartSourceEditor
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  inherited Pan: TPanel
    inherited PanelApply: TPanel
      inherited BApply: TButton
        OnClick = BApplyClick
      end
    end
  end
end
