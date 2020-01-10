#include <iostream>

// Fz = 0 = mg - bv -> v = mg/b = (6.54*9.81)/15.432 = 4.157

struct Particle{
  double Rz = 0, Vz = 0, Fz = 0;
  double mass = 0;
};

const double G = 9.81;
const double TF = 2.83;
const double DT = 0.01;
const double B = 0.0; //15.432;

void initial_conditions(Particle & p);
void set_properties(Particle & p);
void evolve(Particle & p, double t, double dt);
void force(Particle & p, double t);
void print(Particle & p, double t);

int main(void){

  double t = 0.0;
  
  Particle p1;
  initial_conditions(p1);
  set_properties(p1);

  for(t = 0;t <= TF;t += DT){
    force(p1, t);
    evolve(p1, t, DT);
    print(p1, t);
    //std::cin.get();
  }
  
  return 0;
}

void initial_conditions(Particle & p){
  p.Rz = 12.345;
  p.Vz = 0.0;
}

void set_properties(Particle & p){
  p.mass = 6.54;
}

void evolve(Particle & p, double t, double dt){
  // euler: R(t+dt) = R(t) + V(t)*dt + F(t)*dt^2/(2*mass)
  // euler" V(t+dt) = V(t) + F(t)*dt/mass

  p.Rz = p.Rz + p.Vz*dt + p.Fz*dt*dt/(2*p.mass);
  p.Vz = p.Vz + p.Fz*dt/(p.mass);
}

void print(Particle & p, double t){
  std::cout << t << "\t"
	    << p.Rz << "\t"
	    << p.Vz << "\t"
	    << p.Fz << "\t"
	    << p.mass << "\n";
}

void force(Particle & p, double t){
  p.Fz = 0;
  // gravity
  p.Fz -= p.mass*G;
  // damping
  p.Fz -= B*p.Vz;
}
