#pragma once

#include "zcameraacquisition_global.h"
#include "zcamerainterface.h"

#include <QDialog>

namespace Z3D
{

namespace Ui {
class ZCameraSelectorDialog;
}

class Z3D_CAMERAACQUISITION_SHARED_EXPORT ZCameraSelectorDialog : public QDialog
{
    Q_OBJECT

public:
    ~ZCameraSelectorDialog();

    static Z3D::ZCameraInterface::Ptr getCamera();

protected:
    explicit ZCameraSelectorDialog(QWidget *parent = 0);

protected slots:
    void onCameraSelected(Z3D::ZCameraInterface::Ptr camera);

private:
    Ui::ZCameraSelectorDialog *ui;

    Z3D::ZCameraInterface::Ptr m_selectedCamera;
};

} // namespace Z3D