#ifndef DLG_MODEL_COORDS_H
#define DLG_MODEL_COORDS_H

#include "CoordScale.h"
#include "CoordsType.h"
#include "ThetaUnits.h"

class CmdMediator;

/// Model for DlgSettingsCoords and CmdSettingsCoords.
class DlgModelCoords
{
public:
  /// Default constructor.
  DlgModelCoords();

  /// Initial constructor from Document.
  DlgModelCoords(const CmdMediator &cmdMediator);

  /// Copy constructor.
  DlgModelCoords(const DlgModelCoords &other);

  /// Assignment constructor.
  DlgModelCoords &operator=(const DlgModelCoords &other);

  /// Get method for linear/log scale on x/theta.
  CoordScale coordScaleXTheta () const;

  /// Get method for linear/log scale on y/radius.
  CoordScale coordScaleYRadius () const;

  /// Get method for coordinates type.
  CoordsType coordsType () const;

  /// Get method for origin radius in polar mode.
  double originRadius () const;

  /// Set method for linear/log scale on x/theta.
  void setCoordScaleXTheta (CoordScale coordScale);

  /// Set method for linear/log scale on y/radius.
  void setCoordScaleYRadius (CoordScale coordScale);

  /// Set method for coordinates type.
  void setCoordsType (CoordsType coordsType);

  /// Set method for origin radius in polar mode.
  void setOriginRadius (double originRadius);

  /// Set method for theta units.
  void setThetaUnits (ThetaUnits thetaUnits);

  /// Get method for theta units.
  ThetaUnits thetaUnits () const;

private:

  CoordsType m_coordsType;
  double m_originRadius; // Applies to polar coordinates. Usually zero
  CoordScale m_coordScaleXTheta;
  CoordScale m_coordScaleYRadius;
  ThetaUnits m_thetaUnits; // Applies to polar coordinates
};

#endif // DLG_MODEL_COORDS_H