/*Attiny 1614 development board by Fabina Grosso.
  Flash CPU Speed Any.
  this code is released under GPL v3, you are free to use and modify.
  released on 2021.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    To contact us: ledboy.net
    ledboyconsole@gmail.com
*/
#define LED PIN_PA4

bool ledState = true;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
  digitalWrite(LED, ledState);
  delay(1000);
  ledState = !ledState;
}
