#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 fscanf(stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if( VAR4 != 0 )
 {
 FUN2(100 / VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 int VAR5,VAR6;
 int VAR4;
 VAR4 = -1;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 VAR4 = 7;
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 FUN2(100 / VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
