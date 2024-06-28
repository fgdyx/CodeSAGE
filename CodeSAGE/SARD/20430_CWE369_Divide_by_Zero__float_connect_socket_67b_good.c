#ifndef VAR1
void FUN1(CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2)
{
 float VAR3 = VAR2.VAR4;
 {
 int VAR5 = (int)(100.0 / VAR3);
 FUN2(VAR5);
 }
}
void FUN3(CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2)
{
 float VAR3 = VAR2.VAR4;
 if(FUN4(VAR3) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR3);
 FUN2(VAR5);
 }
 else
 {
 FUN5("");
 }
}
#endif
