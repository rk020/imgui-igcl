#pragma once
#include "Intel/IntelGpuController.h"


class GpuController
{
public:
    IntelGpuController IntelController;
    GpuControllerInterface* pActiveController;

    std::vector<DisplayAdapter> AdapterList;
    DisplayAdapter* pActiveAdapter;

    std::vector<DisplayPanel> PanelList;
    DisplayPanel* pActivePanel;

    std::vector<RrPreset> RrPresetList;
    RrPreset *pActivePreset, *pSelectedPreset;

    DisplayRrCaps ActiveRrCaps;
    DisplayRrState ActiveRrState, SelectedRrState;

    virtual bool Init();
    virtual void SetActiveAdapter(GpuControllerInterface*, DisplayAdapter*);
    virtual void SetActivePanel(GpuControllerInterface*, DisplayPanel*);
    virtual bool Apply(int SelectedPreset);
};
