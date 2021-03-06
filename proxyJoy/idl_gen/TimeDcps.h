//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: TimeDcps.h
//  Source: TimeDcps.idl
//  Generated: Mon Jun 11 14:24:24 2012
//  OpenSplice V5.4.1OSS
//  
//******************************************************************
#ifndef _TIMEDCPS_H_
#define _TIMEDCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps_builtintopics.h"
#include "dds_builtinTopics.h"
#include "Time.h"
#include "dds_dcps_interfaces.h"
struct Time;

class TimeTypeSupportInterface;

typedef TimeTypeSupportInterface * TimeTypeSupportInterface_ptr;
typedef DDS_DCPSInterface_var < TimeTypeSupportInterface> TimeTypeSupportInterface_var;
typedef DDS_DCPSInterface_out < TimeTypeSupportInterface> TimeTypeSupportInterface_out;


class TimeDataWriter;

typedef TimeDataWriter * TimeDataWriter_ptr;
typedef DDS_DCPSInterface_var < TimeDataWriter> TimeDataWriter_var;
typedef DDS_DCPSInterface_out < TimeDataWriter> TimeDataWriter_out;


class TimeDataReader;

typedef TimeDataReader * TimeDataReader_ptr;
typedef DDS_DCPSInterface_var < TimeDataReader> TimeDataReader_var;
typedef DDS_DCPSInterface_out < TimeDataReader> TimeDataReader_out;


class TimeDataReaderView;

typedef TimeDataReaderView * TimeDataReaderView_ptr;
typedef DDS_DCPSInterface_var < TimeDataReaderView> TimeDataReaderView_var;
typedef DDS_DCPSInterface_out < TimeDataReaderView> TimeDataReaderView_out;


struct TimeSeq_uniq_ {};
typedef DDS_DCPSUFLSeq < Time, struct TimeSeq_uniq_> TimeSeq;
typedef DDS_DCPSSequence_var < TimeSeq> TimeSeq_var;
typedef DDS_DCPSSequence_out < TimeSeq> TimeSeq_out;
class TimeTypeSupportInterface
:
   virtual public DDS::TypeSupport
{ 
public:
   typedef TimeTypeSupportInterface_ptr _ptr_type;
   typedef TimeTypeSupportInterface_var _var_type;

   static TimeTypeSupportInterface_ptr _duplicate (TimeTypeSupportInterface_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static TimeTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
   static TimeTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static TimeTypeSupportInterface_ptr _nil () { return 0; }
   static const char * _local_id;
   TimeTypeSupportInterface_ptr _this () { return this; }


protected:
   TimeTypeSupportInterface () {};
   ~TimeTypeSupportInterface () {};
private:
   TimeTypeSupportInterface (const TimeTypeSupportInterface &);
   TimeTypeSupportInterface & operator = (const TimeTypeSupportInterface &);
};

class TimeDataWriter
:
   virtual public DDS::DataWriter
{ 
public:
   typedef TimeDataWriter_ptr _ptr_type;
   typedef TimeDataWriter_var _var_type;

   static TimeDataWriter_ptr _duplicate (TimeDataWriter_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static TimeDataWriter_ptr _narrow (DDS::Object_ptr obj);
   static TimeDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static TimeDataWriter_ptr _nil () { return 0; }
   static const char * _local_id;
   TimeDataWriter_ptr _this () { return this; }

   virtual DDS::InstanceHandle_t register_instance (const Time& instance_data) = 0;
   virtual DDS::InstanceHandle_t register_instance_w_timestamp (const Time& instance_data, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t unregister_instance (const Time& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t unregister_instance_w_timestamp (const Time& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t write (const Time& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t write_w_timestamp (const Time& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t dispose (const Time& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t dispose_w_timestamp (const Time& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t writedispose (const Time& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t writedispose_w_timestamp (const Time& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t get_key_value (Time& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Time& instance_data) = 0;

protected:
   TimeDataWriter () {};
   ~TimeDataWriter () {};
private:
   TimeDataWriter (const TimeDataWriter &);
   TimeDataWriter & operator = (const TimeDataWriter &);
};

class TimeDataReader
:
   virtual public DDS::DataReader
{ 
public:
   typedef TimeDataReader_ptr _ptr_type;
   typedef TimeDataReader_var _var_type;

   static TimeDataReader_ptr _duplicate (TimeDataReader_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static TimeDataReader_ptr _narrow (DDS::Object_ptr obj);
   static TimeDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static TimeDataReader_ptr _nil () { return 0; }
   static const char * _local_id;
   TimeDataReader_ptr _this () { return this; }

   virtual DDS::ReturnCode_t read (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t read_next_sample (Time& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t take_next_sample (Time& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t read_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_next_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_next_instance_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t return_loan (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::ReturnCode_t get_key_value (Time& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Time& instance) = 0;

protected:
   TimeDataReader () {};
   ~TimeDataReader () {};
private:
   TimeDataReader (const TimeDataReader &);
   TimeDataReader & operator = (const TimeDataReader &);
};

class TimeDataReaderView
:
   virtual public DDS::DataReaderView
{ 
public:
   typedef TimeDataReaderView_ptr _ptr_type;
   typedef TimeDataReaderView_var _var_type;

   static TimeDataReaderView_ptr _duplicate (TimeDataReaderView_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static TimeDataReaderView_ptr _narrow (DDS::Object_ptr obj);
   static TimeDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static TimeDataReaderView_ptr _nil () { return 0; }
   static const char * _local_id;
   TimeDataReaderView_ptr _this () { return this; }

   virtual DDS::ReturnCode_t read (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t read_next_sample (Time& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t take_next_sample (Time& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t read_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_next_instance (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_next_instance_w_condition (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t return_loan (TimeSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::ReturnCode_t get_key_value (Time& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Time& instance) = 0;

protected:
   TimeDataReaderView () {};
   ~TimeDataReaderView () {};
private:
   TimeDataReaderView (const TimeDataReaderView &);
   TimeDataReaderView & operator = (const TimeDataReaderView &);
};

template <>
DDS::BuiltinTopicKey_t_slice* DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::copy (DDS::BuiltinTopicKey_t_slice *to, const DDS::BuiltinTopicKey_t_slice* from);
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::free (DDS::BuiltinTopicKey_t_slice *ptr);




#endif 
