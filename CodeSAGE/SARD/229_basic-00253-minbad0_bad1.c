int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 10 - (10 - 1);
 for(VAR3 = VAR1; ; VAR3 += VAR2)
 {
 if (VAR3 > 10) break;
 /* BAD */
 VAR4[VAR3] = '';
 }
 return 0;
}
