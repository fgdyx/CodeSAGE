#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = (float)FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 break;
 default:
 FUN9("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN9("");
 break;
 default:
 if(FUN10(VAR2) > 0.000001)
 {
 int VAR24 = (int)(100.0 / VAR2);
 FUN11(VAR24);
 }
 else
 {
 FUN9("");
 }
 break;
 }
}
static void FUN12()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = (float)FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 break;
 default:
 FUN9("");
 break;
 }
 switch(7)
 {
 case 7:
 if(FUN10(VAR2) > 0.000001)
 {
 int VAR24 = (int)(100.0 / VAR2);
 FUN11(VAR24);
 }
 else
 {
 FUN9("");
 }
 break;
 default:
 FUN9("");
 break;
 }
}
static void FUN13()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(5)
 {
 case 6:
 FUN9("");
 break;
 default:
 VAR2 = 2.0F;
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR24 = (int)(100.0 / VAR2);
 FUN11(VAR24);
 }
 break;
 default:
 FUN9("");
 break;
 }
}
static void FUN14()
{
 float VAR2;
 VAR2 = 0.0F;
 switch(6)
 {
 case 6:
 VAR2 = 2.0F;
 break;
 default:
 FUN9("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR24 = (int)(100.0 / VAR2);
 FUN11(VAR24);
 }
 break;
 default:
 FUN9("");
 break;
 }
}
void FUN15()
{
 FUN1();
 FUN12();
 FUN13();
 FUN14();
}
#endif
