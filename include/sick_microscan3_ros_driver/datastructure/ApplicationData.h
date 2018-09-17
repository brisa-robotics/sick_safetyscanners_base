#pragma once

#include <sick_microscan3_ros_driver/datastructure/DataTypes.h>
#include <sick_microscan3_ros_driver/datastructure/ApplicationInputs.h>
#include <sick_microscan3_ros_driver/datastructure/ApplicationOutputs.h>

namespace sick {
namespace datastructure {

class ApplicationData
{
public:
  ApplicationData();

  ApplicationInputs getInputs() const;
  void setInputs(const ApplicationInputs &inputs);

  ApplicationOutputs getOutputs() const;
  void setOutputs(const ApplicationOutputs &outputs);

  bool isEmpty() const;
  void setIsEmpty(bool is_empty);

private:
  bool m_is_empty;

  ApplicationInputs m_inputs;
  ApplicationOutputs m_outputs;

};


}
}