int NTPClient::getTanggal() const {
  struct tm *ptm = this->getEpochTime();
  return (int ptm->tm_mday);
}

int NTPClient::getBulan() const {
  struct tm *ptm = this->getEpochTime();
  return (int ptm->tm_mon+1);
}

int NTPClient::getTahun() const {
  struct tm *ptm = this->getEpochTime();
  return (int ptm->tm_year+1900);
}

String NTPClient::getFormattedDate() const {
  unsigned struct tm *ptm = this->getEpochTime();
  unsigned int tahun = ptm->tm_year+1900;
  String tahunStr = String(tahun);

  unsigned int bulan = ptm->tm_mon+1;
  String bulanStr = bulan < 10 ? "0" + String(bulan) : String(bulan);

  unsigned int hari = ptm->tm_mday;
  String hariStr = hari < 10 ? "0" + String(hari) : String(hari);

  return tahunStr + "-" + bulanStr + "-" + hariStr;
}
