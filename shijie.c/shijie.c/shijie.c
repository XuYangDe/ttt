clc;clear all;close all;
r=1;deta1=-0.05.*r;deta2=0;deta3=0.68.*r;omg1=0.01;omg=0.27.*r;omg3=0.35.*r;r21=0.001.*r;L=140;k=pi;N=5;M=5;b=4;a=4; 
t=(0:0.1:1);v=t';
u=(0:0.1:1);w=u';
q=(-1:0.31:1);Q=q';
s=(-1:0.31:1);S=s';
filter=zeros(length(Q),1);
for  n=1:length(Q)
    P=0; R=Q(n);
for  r=1:length(Q)
    Z=0; P=S(r);
for  m=1:length(v)
    x=v(m);
for o=1:length(v)
    y=w(o);
     omg2=omg.*sin(k*x)+omg.*sin(k*y);
     A=r-i.*deta1;
B=2.*r+i.*(deta3-deta1);
C=r21-i.*(deta1-deta2);
D=r+i.*(deta3+deta2-deta1);
M1=omg2.^2;
M2=omg3.^2;
  Y1=M2.*(4.*M1+r.^2+deta2.^2)+M1.*(r.^2+deta3.^2);
  P11=(r.^2+M2+deta3.^2).*M1./Y1;
  P14=-i.*M1.*omg3.*(r-i.*deta3)./Y1;
  P23=-i.*M2.*omg2.*(r-i.*deta2)./Y1;
  P33=M1.*M2./Y1;
M3=omg3.*(M2-M1+D.*C).*P14+omg2.*(M1-M2+B.*D).*P23;
M4=(M2-M1-A.*C).*(M2-M1-B.*D)+M2.*(A+D).*(B+C);
M5=M3./M4;
H1=i.*(B.*M2+M1.*C+B.*C.*D).*(P11-P33);
H2=H1./M4;
G1=M5+H2;
Y=r.*G1;
T=exp(-imag(Y).*L+i*real(Y)*L);
T1=abs(T);
Z=0.01.*T.*exp(-2.*k.*i.*x.*P.*b).*exp(-2.*k.*i.*y.*R.*a);
zz=dblquad(Z,0,1,0,1);
end
filter(n)=abs(zz).^2.*[sin(N.*k.*b.*P).^2./(N.^2.*sin(k.*P.*b).^2)].*[sin(M.*k.*a.*R).^2./(M.^2.*sin(k.*R.*a).^2)];
end
end
end
grid on;hold on
surf(S,Q,filter);
xlabel('sin(x)','FontWeight','Bold')
ylabel('sin(y)','FontWeight','Bold')
hold off;