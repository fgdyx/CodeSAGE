#ifndef VAR1
void FUN1(VAR2<short> VAR3)
{
 short VAR4 = VAR3[2];
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR4 < 100)
 {
 strncpy(VAR6, VAR5, VAR4);
 VAR6[VAR4] = '';
 }
 FUN2(VAR6);
 }
}
#endif
