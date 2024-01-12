void setup() {
  // put your setup code here, to run once:
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(19200);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  //Define Dummy Packet
  uint16_t CCSDS_Header_1_APID = 0x0123;
  uint16_t CCSDS_Header_2_Seq = 0x0123;
  uint16_t PKT_LEN = 0x00;
  uint64_t Time_Stamp = 0x00;
  uint16_t _3V3_dig_curr = 0x04;
  uint16_t _3V3_dig_volt = 0x05;
  uint16_t _2V5_dig_curr = 0x06;
  uint16_t _2V5_dig_volt = 0x07;
  uint16_t _5V_ana_curr = 0x08;
  uint16_t _5V_ana_volt = 0x09;
  uint16_t _2V5_ana_curr = 0x10;
  uint16_t _2V5_ana_volt = 0x11;
  uint16_t _12V_curr = 0x12;
  uint16_t _28V_bus_curr = 0x13;
  uint16_t _28V_bus_volt = 0x14;
  uint16_t hv1_control_v = 0x15;
  uint16_t hv2_control_v = 0x16;
  uint16_t therm_1_temp = 0x17;
  uint16_t therm_2_temp = 0x18;
  uint16_t therm_3_temp = 0x19;
  uint16_t therm_4_temp = 0x20;
  uint16_t therm_5_temp = 0x21;
  uint16_t therm_6_temp = 0x22;
  uint16_t therm_7_temp = 0x23;
  uint16_t therm_8_temp = 0x24;
  uint16_t therm_9_temp = 0x25;
  uint16_t therm_10_temp = 0x26;
  uint16_t therm_11_temp = 0x27;
  uint16_t therm_12_temp = 0x28;
  uint16_t therm_13_temp = 0x29;
  uint16_t therm_14_temp = 0x30;


  //Transmit the packet 
  Serial.write(CCSDS_Header_1_APID);
  Serial.write(CCSDS_Header_2_Seq);
  Serial.write(PKT_LEN);
  //Serial.write(PKT_LEN);


  //Delay for 1 sec
  delay(1000);

}
