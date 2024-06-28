#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4.FUN2();
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7))
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN3(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4.FUN2();
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN3(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
